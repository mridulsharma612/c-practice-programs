#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    getch();
}
