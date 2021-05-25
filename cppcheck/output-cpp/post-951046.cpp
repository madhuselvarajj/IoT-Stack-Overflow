#include <stdio.h>

static int bar = 0;

int __real_main(int argc, char **argv);

int __wrap_main(int argc, char **argv)
{
    bar = 1;
    return __real_main(argc, argv);
}

int main(int argc, char **argv)
{
    printf("bar %d\n",bar);
    return 0;
}
