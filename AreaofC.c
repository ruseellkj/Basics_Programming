#include <stdio.h>
int main()
{
    float radius;
    double area;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area = %.2lf", area);

    return 0;

}

