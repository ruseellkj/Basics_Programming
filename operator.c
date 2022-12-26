#include <stdio.h>

int main()
{
    int a=7, b=8;
    b = ++a - ++a;
    printf("%d", b);

    return 0;
}