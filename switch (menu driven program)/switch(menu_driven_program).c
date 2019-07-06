#include<stdio.h>
#include<stdlib.h>
 void main()
{
    int x;

    while(1)
    {
    printf("Select any of following function\n1.Addition\n2.Odd-Even\n3.Printing first n natural numbers\n4.Exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1: add();break;
        case 2: odd_even();break;
        case 3: n_numbers();break;
        case 4:exit(0);break;
        default:printf("Invalid selection\n");
        getch();
    }
    }
}

void add()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Result: %d\n",a+b);
    getch();
}

void odd_even()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    a!=0?a%2==0?printf("Result: Even number\n"):printf("Result: Odd number\n"):printf("Result: Number entered is zero\n");
    getch();

}

 void n_numbers()
{
    int i,a;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    printf("Result: ");
    for(i=1;a>0;i++)            //for(i=1;i<=a;i++)  no need of break
    {
        printf("%d, ",i);
        if(i==a)
        {
            break;
        }

    }
    printf("\n");
    getch();
}
