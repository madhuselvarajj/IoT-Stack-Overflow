// Handle of the communication connection 
void *comHandle;

// Port parameters, set to your own needs
unsigned portIndex;
unsigned baudRate;
unsigned dataBits;
Parity   parity;
unsigned stopBits;
bool     handShake;
int      readIntervalTimeout;
int      readTotalTimeoutMultiplier;
int      readTotalTimeoutConstant;
int      writeTotalTimeoutMultiplier;
int      writeTotalTimeoutConstant;
DCB dcb;
COMMTIMEOUTS ct;

// Create COM-device name string 
char comDevice[20];
sprintf(comDevice, "\\\\.\\COM%d", portIndex);

// Open serial port
_comHandle = CreateFile(comDevice, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
if (comHandle == INVALID_HANDLE_VALUE)
{
  return false;
}


ct.ReadIntervalTimeout         = readIntervalTimeout;        
ct.ReadTotalTimeoutMultiplier  = readTotalTimeoutMultiplier; 
ct.ReadTotalTimeoutConstant    = readTotalTimeoutConstant;   
ct.WriteTotalTimeoutMultiplier = writeTotalTimeoutMultiplier;
ct.WriteTotalTimeoutConstant   = writeTotalTimeoutConstant;  

if (!GetCommState(_comHandle,&dcb))
{
  disconnect();
  return false;
}

dcb.BaudRate        = baudRate;  
dcb.ByteSize        = (BYTE)dataBits;
dcb.Parity          = (parity == None) ? NOPARITY : ((parity == Even) ? EVENPARITY : ODDPARITY);
dcb.StopBits        = (stopBits > 1) ? TWOSTOPBITS : ONESTOPBIT;
dcb.fRtsControl     = handShake ? RTS_CONTROL_HANDSHAKE : RTS_CONTROL_ENABLE;
dcb.fOutxCtsFlow    = handShake;
dcb.fOutxDsrFlow    = handShake;
dcb.fDtrControl     = handShake ? DTR_CONTROL_HANDSHAKE : DTR_CONTROL_ENABLE;
dcb.fDsrSensitivity = handShake;
dcb.fOutX           = FALSE;
dcb.fInX            = FALSE;
dcb.fErrorChar      = FALSE;
dcb.fNull           = FALSE;
dcb.fAbortOnError   = TRUE;

// Set port state
if( !SetCommState(_omHandle, &dcb) ||
    !SetCommTimeouts(comHandle, &ct) ||
    !SetupComm(comHandle, 64, 64) ||
    !PurgeComm(comHandle, PURGE_TXABORT | PURGE_RXABORT | PURGE_TXCLEAR | PURGE_RXCLEAR))
{
  disconnect();
  return false;
} 
