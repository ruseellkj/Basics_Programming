#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");

    // Loop 1 execution
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop 2 execution
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}