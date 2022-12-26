#include <stdio.h>

int main()
{
    int i,j,rows,space;
    printf("enter the number of rows\n");
    scanf("%d", &rows);
    printf("\n");


    // Loop 1 execution
    for(i = 1; i <= rows; i++)
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


    // Loop 2 execution
    for(i = 4; i >= 1; i--)
    {
        for(space = 1; space <= (5-i); space++)
        {
            printf(" ");
        }

        for(j=1; j <= (2*i-1); j++)
        {
            printf("*");

        }
        printf("\n");

    }

}