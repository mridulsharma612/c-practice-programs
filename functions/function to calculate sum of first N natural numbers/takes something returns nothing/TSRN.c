#include<stdio.h>
#include<conio.h>
void series_sum(int);
void series_sum(int num)
{
    int i,sum=0;

    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("Result: %d",sum);
}

void main()
{
    int n;
     printf("Enter number of terms\n");
    scanf("%d",&n);
    series_sum(n);
    getch();
}
