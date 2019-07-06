#include<stdio.h>
#include<conio.h>
void main()
{
    int x=5,y=6,z;
    printf("%d %d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
    getch();
}
