#include <stdio.h>

void sum();
void sub();
void mul();
void div();

void main()
{
    sum();
    printf("hello world\n");
    sub();
    printf("hello world 2\n");
    mul();
    printf("hello world 3\n");
    div();
    printf("hello world 4\n");

}



void sum(void)
{
    int a,b,sum=0;
    printf("Enter Two numbers\n");
    scanf("%d %d", &a,&b);
    sum=a+b;
    printf("Sum = %d\n",sum);

}
void sub(void)
{
    int x,y,sub=0;
    printf("Enter Two numebrs\n");
    scanf("%d %d", &x,&y);
    sub=x-y;
    printf("Sub = %d\n",sub);

}
void mul(void)
{
    int a,b,mul=0;
    printf("Enter Two numebrs\n");
    scanf("%d %d", &a,&b);
    mul=a*b;
    printf("Mul = %d\n",mul);
    
}
void div(void)
{
    int x,y,div=0;
    printf("Enter Two numebrs\n");
    scanf("%d %d", &x,&y);
    div=x/y;
    printf("Div=%d\n",div);
    
}