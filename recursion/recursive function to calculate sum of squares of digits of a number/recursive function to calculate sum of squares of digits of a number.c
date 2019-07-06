#include<stdio.h>
int sq_sum(int n)
{
    if(n%10==n)
        return (n*n);
    return(((n%10)*(n%10))+sq_sum(n/10));
}


void main()
{
    int n;
    printf("Enter a number to find sum of squares of it's digits\n");
    scanf("%d",&n);
    printf("Result: %d",sq_sum(n));
}
