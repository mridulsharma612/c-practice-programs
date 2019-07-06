#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter two number a and b respectively\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a = %d  b = %d",a,b);
}

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
