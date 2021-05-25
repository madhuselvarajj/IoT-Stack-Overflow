void formatTimeDigits(char strOut[3], int num)
{
  strOut[0] = '0' + (num / 10);
  strOut[1] = '0' + (num % 10);
  strOut[2] = '\0';
}

void serialOutput12()
{
  char strOut[3]; // the allocation is in this stack frame, not formatTimeDigits

  printWeekday(weekday); // picks the right word to print for the weekday

  Serial.print(", "); // a comma after the weekday

  Serial.print(hour12, DEC); // the hour, sent to the screen in decimal format

  Serial.print(":"); // a colon between the hour and the minute

  formatTimeDigits(strOut, minute);
  Serial.print(strOut); // the minute

  Serial.print(":"); // a colon between the minute and the second

  formatTimeDigits(strOut, second);
  Serial.print(strOut); // the second
}
