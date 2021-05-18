// Fill the buffer with 0
char szBuff[256] = {0};
// We have no data in the buffer, so the end of data points to the beginning 
// of the buffer.
char* szEndOfData = szBuff; 
while (i < maxSamples)
{
    WaitCommEvent (hSerial, &dwCommStatus, 0);

    if (dwCommStatus & EV_RXCHAR) 
    {
        // Append up to 4 bytes from the serial port to the buffer
        ReadFile(hSerial, LPVOID(szEndOfData), 4, &dwBytesRead, NULL);
        // Increment the end of data pointer, so it points to the end of the
        // data available in the buffer.
        szEndOfData += dwBytesRead;

        cout<<szBuff;
        printf(" - %d - \n", atoi(szBuff));
    }
    i++;     
}

// Output, assuming what you mentioned happens:
// - 88 -
// - 8889 -
