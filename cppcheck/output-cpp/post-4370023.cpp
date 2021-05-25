char lineOneC[8] = {0,1,1,0,0,0,0,1}; 
char lineOneB = 0;
for(int i=0; i<8;i++)
{
    lineOneB |= lineOneC[i] << (7-i);
}
