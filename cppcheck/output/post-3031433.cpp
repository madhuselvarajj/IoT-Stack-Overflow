void send16(int value)
{
    //send both bytes
    Serial.print(value & 0xFF, BYTE);
    Serial.print((value >> 8) & 0xFF, BYTE);
}
