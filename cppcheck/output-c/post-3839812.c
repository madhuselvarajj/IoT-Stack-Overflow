
Byte   Value  Description
 1     0xAA   First sync byte
 2     0x55   Second sync byte
 3     seq    Message sequence number, increments for each new message transmitted
 4     1      Message type (1 = Wheel encoder report)
 5     5      Number of data bytes to follow
 6     ID     Bot ID
 7     FL     Front left wheel encoder
 8     FR     Front right wheel encoder
 9     RL     Rear left wheel encoder
 10    RR     Rear right wheel encoder
 11    CS     Checksum of bytes 1 - 10
