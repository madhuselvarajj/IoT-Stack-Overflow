char * formatTimeDigits (int num)
{
  static char strOut[3];

  if (num >= 0 && num < 100) {
    sprintf(strOut, "%02d", num);
  } else {
    strcpy(strOut, "XX");
  }

  return strOut;
}
