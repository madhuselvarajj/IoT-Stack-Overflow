char *
int2str( unsigned long num ) {
    static char retnum[21];       // Enough for 20 digits plus NUL from a 64-bit uint.
    sprintf( retnum, "%ul", num );
    return retnum;
}
