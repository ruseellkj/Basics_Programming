/* Write a Program to Make a Simple Calculator to Add, Subtract,
Multiply or Divide Using Switch case statement.
The program should take an arithmetic operator (+, -, *, /) and two operands from a user and performs the operation on those two operands depending upon the operator entered by the user. */

#include <stdio.h>
int main()
{
    int a, b, op;
    printf("Enter the value for a :\n");
    scanf("%d", &a);
    printf("Enter the value for b :\n");
    scanf("%d", &b);
    printf("1 for addition:\n2 for subtraction:\n3 for multiplication:\n4 for division :\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("%d + %d = %d\n", a, b, a + b);
        break;

    case 2:
        printf("%d - %d = %d\n", a, b, a - b);
        break;

    case 3:
        printf("%d * %d = %d\n", a, b, a * b);
        break;

    case 4:
        printf("%d / %d = %d\n", a, b, a / b);
        break;

    default:
        printf("Please enter the correct operator for the result to be shown");
    }

    return 0;
} 

// // Program to build a basic calculator
// #include <stdio.h>
// int main()
// {
//     int a, b, op;
//     printf("Enter numbers : ");
//     scanf("%d %d", &a, &b);
//     printf("Press\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Divide");
//     scanf("%d", &op);
//     switch (op)
//     {
//     case 1:
//         printf("%d + %d = %d\n", a, b, a + b);
//         break;
//     case 2:
//         printf("%d - %d = %d\n", a, b, a - b);
//         break;
//     case 3:
//         printf("%d * %d = %d\n", a, b, a * b);
//         break;
//     case 4:
//         printf("%d / %d = %d\n", a, b, a / b);
//         break;
//     default:
//         printf("Invalid");
//     }
//     return 0;
// }
