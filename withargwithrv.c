#include <stdio.h>

// Function declaration
int sum(int,int);

void main()
{
    int x,y,c;
    printf("Enter x and y\n");
    scanf("%d %d", &x ,&y);
    c = sum(x,y);
    printf("Sum = %d", c);


}

int sum (int a, int b)
{
    return a+b;

}