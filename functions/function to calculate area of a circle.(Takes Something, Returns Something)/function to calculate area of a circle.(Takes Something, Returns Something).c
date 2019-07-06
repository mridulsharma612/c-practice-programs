#include<stdio.h>
#include<math.h>
float area(int);
float area(int radius)
{
    float a;
    a= M_PI*radius*radius;
    return (a);
}

void main()
{
    int n;
    float m;
    printf("Enter the radius of the circle to calculate the area\n");
    scanf("%d",&n);
    m = area(n);
    printf("Result: %f",m);
}
