#include<stdio.h>
#include<conio.h>
void series_sum(void);
void series_sum()
{
    int i,n,sum=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Result: %d",sum);
}

void main()
{
    series_sum();
    getch();
}
