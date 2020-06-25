#include "other_file.h"

static int a = 0;

void modify(void)
{
    static int b = 0;

    a++;
    b++;
    printf("a = %d, b = %d\n", a, b);
}