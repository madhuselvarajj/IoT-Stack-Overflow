unsigned char swap24(unsigned char bytein) {
    unsigned char mask2 = ( bytein & 0x04 ) << 2;
    unsigned char mask4 = ( bytein & 0x10 ) >> 2;
    unsigned char mask  = mask2 | mask4 ;
    return ( bytein & 0xeb ) | mask;
}
