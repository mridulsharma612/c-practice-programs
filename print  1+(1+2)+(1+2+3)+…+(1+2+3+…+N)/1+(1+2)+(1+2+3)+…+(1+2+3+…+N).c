#include<stdio.h>
void main()
{
    int i,j,n,k,sum=0;
    printf("Enter the number of terms in series 1+(1+2)+(1+2+3)+...+(1+2+3+...+N) to find out the sum\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
           k+=j;
        }
        sum+=k;
    }
    printf("Result: %d",sum);
}
