#include <stdio.h>

void test(char k[])
{
    printf("%d\n", sizeof(k));
}

int main ()
{
    char* key[100];
    test(key);
    printf("%d\n", sizeof(key));
    return 0;
}
