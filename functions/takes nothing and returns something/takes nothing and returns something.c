#include<stdio.h>
#include<conio.h>
int add(void);
int add()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}
void main()
{
    int s;
    s=add();
    printf("Sum is %d\n",s);
    getch();
}

