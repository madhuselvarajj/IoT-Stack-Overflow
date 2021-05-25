void HT1632C::plot (int x, int y, byte color)
{
  if (x < 0 || x > X_MAX || y < 0 || y > Y_MAX)
    return;

  if (color != BLACK && color != GREEN && color != RED && color != ORANGE)
    return;

  // using local struct to allow local function definitions
  struct shadowRamAccessor {
    shadowRamAccessor(byte x, byte y) {
      nChip = (x >= 32 ? 3 : 1)
        + x / 16
        + (y > 7 ? 2 : 0);
      bitval = 8 >> (y & 3);
      addr = ((x % 16) << 1) + ((y % 8) >> 2);
      highAddr = addr + 32;
    }

    byte& getShadowRam(byte addr) {
      return shadowRam[addr][nChip-1];
    }

    byte getPreviousColor() {
      byte greenComponent = getShadowRam(addr) & bitval ? GREEN : BLACK;
      byte redComponent = getShadowRam(highAddr) & bitval ? RED : BLACK;
      return greenComponent | redComponent;
    }

    void setValue(byte newColor) {
      byte prev_color = getPreviousColor();
      if(newColor != prev_color)
        setValue(newColor & GREEN, newColor & RED);
    }

    void setValue(bool greenBit, bool redBit)
    {
      HT1632C::sendData(nChip, addr,
        greenBit
          ? getShadowRam(addr) |= bitval
          : getShadowRam(addr) &= !bitval
        );
      HT1632C::sendData(nChip, highAddr,
        redBit
          ? getShadowRam(highAddr) |= bitval
          : getShadowRam(highAddr) &= ~bitval
        );
    }

    byte nChip, bitval, addr, highAddr;
  };

  shadowRamAccessor(x, y).setValue(color);
}
