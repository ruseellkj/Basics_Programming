// Prblm : Print a multiplication table entered by the user 
// Example 
// Input : Enter the number for the multiplication table you want :
// 7
// Output :
// 7 x 1 = 7 
// 7 x 2 = 14
// 7 x 3 = 21
// 7 x 4 = 28
// .
// .
// .
// .
// 7 x 10 = 70


#include <stdio.h>
 int main()
{
    int a;
    printf("Enter The Number : \n");
    scanf("%d",&a);
    printf("Table Of %d \n",a);
    printf("%d X 1 = %d \n",a,a*1);
    printf("%d X 2 = %d \n",a,a*2);
    printf("%d X 3 = %d \n",a,a*3);
    printf("%d X 4 = %d \n",a,a*4);
    printf("%d X 5 = %d \n",a,a*5);
    printf("%d X 6 = %d \n",a,a*6);
    printf("%d X 7 = %d \n",a,a*7);
    printf("%d X 8 = %d \n",a,a*8);
    printf("%d X 9 = %d \n",a,a*9);
    printf("%d X 10 = %d \n",a,a*10);
    
    
    
    return 0;
}