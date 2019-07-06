#include<stdio.h>
#include<conio.h>
int series_sum(int);
int series_sum(int num)
{
    int i,sum=0;

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    return (sum);
}

void main()
{
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    printf("Result: %d",series_sum(n));
    getch();
}
