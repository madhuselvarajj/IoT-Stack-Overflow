char line[8] = { 0, 1, 1, 0, 0, 0, 0, 1 };
unsigned char b = 0;
for ( int ii = 0; ii < 8; ii++ )
{
  b <<= 1;
  b |= line[ii];
}
