char lineOneC[8] = { 0, 1, 1, 0, 0, 0, 0, 1 };
unsigned char b = 0;

for ( int i = 7; i >= 0; i-- ) {
    b |= lineOneC[i] << ( 7 - i );
}
