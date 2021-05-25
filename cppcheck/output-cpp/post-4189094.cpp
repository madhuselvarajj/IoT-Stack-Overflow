DCB dcb = {0};

if ( !::BuildCommDCB( _T("baud=38400 parity=N data=8 stop=1"), &dcb ) )
{
    TRACE(_T("CSerialPort : Failed to build the DCB structure - Error: %d"), GetLastError());
    ThrowException();
}
