char line[8] = { '0', '1', '1', '0', '0', '0', '0', '1'};

unsigned char linebyte = 0;
for (int i = 7, j = 0; j < 8; --i, ++j)
{
    if (line[j] == '1')
    {
        linebyte |= (1 << i);
    }
}
