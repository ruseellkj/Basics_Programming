#include<stdio.h>


int main()
{
	int i, j, rows;
	printf("enter no of rows you want\n");
	scanf("%d", &rows);
    printf("\n");
	for(i = rows; i >= 1; i--)
    {
		for(j = 1; j <= i; j++)
        {
			printf("%d ", j);
		}
		printf("\n");
	}
    return 0;
}