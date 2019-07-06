#include<stdio.h>
void main()
{
    int x=5,y=1, *p1,*p2;
    p1=&x;
    p2=&y;
    printf("x=%d y=%d p1=%u p2=%d\n",x,y,p1,p2);
    printf("p1+1=%d  p1+4=%d  p1-1=%d  p1-4=%d\n",p1+1,p1+4,p1-1,p1-4); //pointer + n = pointer +sizeof(type of pointer)*n
    printf("p1-p2=%d",p1-p2); //p1-p2=literal subtraction /sizeof(type of pointer)
}
