#include "hello.h"
#include <stdio.h>

extern int op_my_struct(struct Mystruct input);

int main()
{
    struct Mystruct ms;
    ms.a = 1;
    ms.b = 2;
    ms.c = 3;
    int sum = op_my_struct(ms);
    printf("sum = %d", sum);
}