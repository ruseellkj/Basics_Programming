#include <stdio.h>

int main()
{
    int i, j, space, rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");

    // Loop 1 execution
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        } 
        printf("\n");
    }

    // Loop 2 execution
    for (i = 1; i <= 4; i++)
    {
        for (space = 1; space <= (4 - i); space++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}
