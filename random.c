#include <stdio.h>

int main()
{
    int i,j,space,rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");

    for(i=1; i<=rows; i++)
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

int main()
{
    int i, j, space, rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");

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
}