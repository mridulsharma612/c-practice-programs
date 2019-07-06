#include<stdio.h>
union item
{
    int x; float y; char z;
};


void main()
{
    union item i;
    i.x=5;
    printf("x = %d\n",i.x);
    i.y = 8.7;
    printf("y = %f\n",i.y);
    i.z = 'h';
    printf("z = %c",i.z);
}
