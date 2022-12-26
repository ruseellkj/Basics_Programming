#include <stdio.h>

// Function declaration
void sum();

// Defining a fucntion
void sum()
{
    int a,b,sum=0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a , &b);
    sum = a+b;
    printf("The sum is %d\n", sum);

}

// Calling a function
void main()
{
    sum();
    
}

