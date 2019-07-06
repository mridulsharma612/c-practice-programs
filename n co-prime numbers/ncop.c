#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=2,b,min,i,N;
    printf("Enter number of terms\n");
    scanf("%d",&N);
    while(N)
    {
        for(b=2;b<=a;b++)
        {
            min=a<b?a:b;
            for(i=2;i<=min;i++)
            {
                if(a%i==0 && b%i==0)
                    break;
            }
            if(i==min+1)
            {
                printf("(%d, %d)\n",a,b);
                N--;
                if(N==0)
                {
                    exit(0);
                }
            }
        }
        a++;
    }
}
