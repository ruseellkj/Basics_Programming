#include <stdio.h>

int main()
{
    int i=1;
    for(;;)
    {
        printf("%d\n", i++);
        if(i>7)
        break;
    }
}