void formatTimeDigits(char strOut[3], int num)
{
  strOut[0] = '0' + (num / 10);
  strOut[1] = '0' + (num % 10);
  strOut[2] = '\0';
}

void serialOutput12()
{
  char strOut[3]; 

  printWeekday(weekday); 

  Serial.print(", "); 

  Serial.print(hour12, DEC); 

  Serial.print(":"); 

  formatTimeDigits(strOut, minute);
  Serial.print(strOut); 

  Serial.print(":"); 

  formatTimeDigits(strOut, second);
  Serial.print(strOut); 
}
