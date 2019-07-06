#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,x=1;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        x*=i;
    }
    printf("Result: %d",x);
    getch();
}
