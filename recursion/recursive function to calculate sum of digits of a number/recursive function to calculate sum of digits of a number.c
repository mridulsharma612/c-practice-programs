#include<stdio.h>
int digit_sum (int n)
{
        if (n%10==n)
            return (n);
        return(n%10 + digit_sum((n/10)));
}

void main()
{
    int a;
    printf("Enter a number to find it's sum of digits\n");
    scanf("%d",&a);
    printf("Result: %d",digit_sum(a));
}
