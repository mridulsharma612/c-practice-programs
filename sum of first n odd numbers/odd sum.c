#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,x=0;
    printf("Enter the number of terms\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        x +=(2*i-1);
    }
    printf("Result: %d",x);
    getch();
}
