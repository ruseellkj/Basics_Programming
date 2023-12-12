#include <stdio.h>

int main()
{
    for (int k = 1; k <= 7; k++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int i = 1; i <= 5; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
