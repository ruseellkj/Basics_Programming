#include <stdio.h>

int main()
{
    int i,j,space,rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");

    // Loop 1 execution
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop 2 execution
    for(i=6; i<=9; i++)
    {
        for(j=1; j <= (i-4); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop 3 execution
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Loop 4 execution
    for(i=2; i<=5; i++)
    {
        for(space=1; space <= (rows-i); space++)
        {
            printf(" ");
        }

        for(j=1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


