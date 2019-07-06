#include<stdio.h>
#include<conio.h>
int add(int,int);
int add(int a, int b)
{
    int c;
    c= a+b;
    return (c);
}

void main()
{
    int x,y,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Sum is %d\n",s);
    getch();

}
