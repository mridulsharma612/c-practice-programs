#include<stdio.h>

#define PI 3.141
#define MSG "sandeep"
#define ABS(a) (a)<0?-(a):(a)
#define SUM(a,b) a+b
#define PRODUCT1(a,b) a*b
#define PRODUCT2(a,b) (a)*(b)

void main()
{
    printf("Area of the circle whose radius is 2 cm is %f cm^2\n",PI*2*2);
    printf("My name is %s\n",MSG);
    printf("abs of -1 & 1 : %d %d\n",ABS(-1),ABS(1));
    printf("Sum of 3 and 2 is %d\n",SUM(3,2));
    printf("Product of 3 and 2 is %d\n",PRODUCT1(3,2));
    printf("Wrong product of 3+2 and 4-6 is %d\n",PRODUCT1(3+2,4-6));
    printf("Right product of 3+2 and 4-6 is %d\n",PRODUCT2(3+2,4-6));
}
