#include <stdio.h>

int main()
{
    int i,j,space,rows;
    printf("enter the number of rows you want\n");
    scanf("%d", &rows);
    printf("\n");
    for(i = rows; i >= 1; i--)
    {
        for(space = 1; space <= (rows-i); space++)
        {
            printf(" ");
        }

        for(j=1; j <= (2*i-1); j++)
        {
            printf("*");

        }
        printf("\n");

    }
    return 0;
}