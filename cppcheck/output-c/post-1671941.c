unsigned char bit_swap(unsigned char n, unsigned char pos1, unsigned char pos2)
{
    unsigned char mask1 = 0x01 << pos1;
    unsigned char mask2 = 0x01 << pos2;
   if ( !((n & mask1) != (n & mask2)) )
        n ^= (mask1 | mask2);
    return n;
}
