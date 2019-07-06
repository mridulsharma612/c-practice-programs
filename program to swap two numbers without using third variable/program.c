#include<stdio.h>
#include<conio.h>
void main()
{
    int x=5,y=6;
    printf("%d %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
    getch();
}
