#include <stdio.h>

int fib(int i)
{
    if (i<3)
    {
        /* code */
        return 1;
    }
    else 
    return (fib(i-1) + fib(i-2));

}

int main()
{
    int i,a;
    printf("enter which position of number you want:\n");
    scanf("%d",&a);
    for (i = 0; i<=a; i++)
    {
        /* code */
        printf("%d ", fib(i));

    }

}