#define SHIFT_BIT 0

if (bitRead(_flags, SHIFT_BIT) == HIGH)
{
    bitClear(_flags, SHIFT_BIT);
}
else
{
    bitSet(_flags, SHIFT_BIT);
}
