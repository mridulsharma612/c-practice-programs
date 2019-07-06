#include<stdio.h>
#include<conio.h>
void add(void); //global declaration of function
void add()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    c = a+b;
    printf("Sum is %d",c);

}

void main()
{
    void add(void); //local declaration of function
    add();
    getch();

}
