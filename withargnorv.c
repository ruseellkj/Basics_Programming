#include <stdio.h>

void sum(int,float);

void main()
{
    int x;
    float y;
    printf("Enter x and y\n");
    scanf("%d %f", &x,&y);
    sum(x,y);

}

void sum(int a,float b)
{
    float s;
    s = a+b;
    printf("sum = %f\n",s);
}
  
