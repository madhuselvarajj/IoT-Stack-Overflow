void SendBuff(const void *pBuff, size_t nBytes)
{
    const char *p = reinterpret_cast<const char *>(pBuff);
    for (size_t i=0; i<nBytes; i++)
        Serial.print(p[i], BYTE);
}

template <typename T>
void Send(const T &t)
{
    SendBuff(&t, sizeof(T));
}
