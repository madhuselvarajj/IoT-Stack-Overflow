int i = 0;  
DWORD dwBytesRead = 0;
DWORD dwCommStatus = 0;
char szBuff[2] = "";                
int maxRead = 20;   
int sizeNum = 1;    
int *num    = (int*)malloc(maxRead*sizeof(int)); 
char *currNum;
char *pastNum;

// Write something into the Serial Port to start receive 
// information from the Arduino
WriteFile(hSerial, (LPCVOID)"A\0", 1, &dwBytesRead, NULL);    
SetCommMask(hSerial, EV_RXCHAR);

// Start reading from the Serial Port
while ( i < maxRead )
{
    WaitCommEvent (hSerial, &dwCommStatus, 0);

    if (dwCommStatus & EV_RXCHAR) // if a char is received in the serial port
    {
        ReadFile(hSerial, LPVOID(szBuff), 1, &dwBytesRead, NULL);

        if ( szBuff[0] > 47 && szBuff[0] < 58 )
        {
            sizeNum++;
            if (sizeNum ==2)
            {
                currNum = (char*)malloc(sizeNum*sizeof(char));
                strcpy(currNum, szBuff);
            } else
            {
                if (pastNum != NULL)
                    free(pastNum);
                pastNum = currNum;
                currNum = (char*)malloc(sizeNum*sizeof(char));
                strcpy(currNum, pastNum);
                strcpy(currNum+(sizeNum-2)*sizeof(char), szBuff);
            }

            cout << szBuff<<endl;   
        } else if (szBuff[0] == '\n' && sizeNum > 1) // end of number
        {
            num[i] = atoi(currNum);
            i++;                    

            sizeNum = 1;
            if (currNum!=NULL)
                free(currNum);
        }
    }
}
