#include<stdio.h>
void main()
{
    int a,b,p,x;
    printf("Enter lower and upper range\n");
    scanf("%d%d",&a,&b);
    for(x=a;x<=b;x++)
    {
        for(p=2;p<=x-1;p++)
        {
            if(x%p==0)
            {
                break;
            }
        }
        if(x==p)
        {
            printf("%d, ",x);
        }
        /*else if(x%p==0)
        {

        }*/
       // else
        {
            //printf("%d, ",x);
        }
    }
}
