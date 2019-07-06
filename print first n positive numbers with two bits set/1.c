#include<stdio.h>
#include<conio.h>
void main()
{
    int n,x=3,y,count,i,j,k;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    k=n;
    while(k)
    {
        y=x;
        count=0;
        while(y)
        {
            if(y%2==1)
            {
                count++;
            }
            y/=2;
        }
        if(count==2)
        {
            printf("%d, ",x);
            k--;
        }
        x++;
    }
    printf("\n");


    // logic two starts from here
    for(i=2;n;i*=2)
    {
        for(j=1;j<i;j*=2)
        {
            printf("%d, ",i+j);
            n--;
            if(n==0)
            {
                break;
            }
        }
    }
}
