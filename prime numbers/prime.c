#include<stdio.h>
void main()
{
    int a,p;

    printf("Enter a number\n");
    scanf("%d",&a);
    for(p=2;p<=a-1;p++)
    {
        if(a%p==0)
        {
            break;
        }
    }
   // printf("%d",p);
    if(p==a)
    {
        printf("Prime number\n");
    }
    /*else if(a%p==0)
    {
        printf("Not a prime number\n");
    }*/
    else
    {
        printf("Not a prime number\n");
    }
}

