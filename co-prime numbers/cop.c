#include<stdio.h>
void main()
{
    int a,b,i,min,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min-1;i++)
    {
        if(a%i==0&&b%i==0)
        {
            break;
        }
    }
    if(min==i)
        printf("Co-prime numbers\n");
    else
        printf("Not Co-prime numbers\n");
}
