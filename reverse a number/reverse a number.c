#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,r;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Reverse : ");
    while(a)
    {
        r=a%10;
        printf("%d",r);
        a/=10;
    }
}
