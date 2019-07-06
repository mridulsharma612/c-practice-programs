#include<stdio.h>
#include<conio.h>
void add(int a ,int b) //formal arguments
{
    int c;
    c=a+b;
    printf("Sum is %d",c);

}


void main()
{
    int x,y;
    void add(int, int);
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    add(x,y );//actual arguments | call by value
    getch();

}
