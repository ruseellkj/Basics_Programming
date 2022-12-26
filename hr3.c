/* Rushils Macbookpro P3 
HR Program 3 : Sum and Diff of two numbers */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int a,b,sum=0,sub=0;
    float m,n,s=0,sb=0;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("%d ", sum);
    sub = a-b;
    printf("%d", sub);

    printf("\n");

    scanf("%f %f", &m, &n);
    s = m+n;
    printf("%.1f ", s);
    sb = m-n;
    printf("%.1f", sb);

    return 0;


}


        // end of the program