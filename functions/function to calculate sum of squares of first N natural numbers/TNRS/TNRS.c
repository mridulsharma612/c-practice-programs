#include<stdio.h>
#include<conio.h>
int series_sum(void);
int series_sum()
{
    int i,n,sum=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(i*i);
    }
    return (sum);
}

void main()
{
    printf("Result: %d",series_sum());
    getch();
}

