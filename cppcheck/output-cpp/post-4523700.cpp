
if(color != prev_color)
{
    shadowRam[addr][nChip-1] |= bitval;
    HT1632C::sendData(nChip, addr, shadowRam[addr][nChip-1]);
    shadowRam[addr+32][nChip-1] &= ~bitval;
    HT1632C::sendData(nChip, addr+32, shadowRam[addr+32][nChip-1]);
}
