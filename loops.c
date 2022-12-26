// #include <stdio.h>
// int main()
// {
//     int i = 0;
//      do {
//          i = i+1;
//          printf("%d\n", i);
//      } while(i<10);
//      return 0;
    
// }

// Problem: Write a Program to Calculate Sum of first N Natural
// Numbers (here value of N is Entered by user)

#include <stdio.h>
int main()
{
    int N, i = 0 , sum = 0;
    printf("Enter the value of N\n");
    scanf("%d", &N);

    do
    {
        /* code */
        sum+=i;
        i = i + 1;
        printf("The sum of %d natural numbers = %d\n", N, sum);
    } while (i<=N);
    return 0;
}

