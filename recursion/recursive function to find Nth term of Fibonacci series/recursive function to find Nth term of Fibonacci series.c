#include<stdio.h>
int fibonacci(int n)
{
    int sum,a,b;

    if (n==1 || n==2)
        return 1;
    sum = fibonacci(n-1) + fibonacci(n-2);
    return (sum);
}

void main()
{
    int n,k;
    printf("Enter the Nth term you want to find in fibonacci series\n");
    scanf("%d",&n);
    k=fibonacci(n);
    printf("Result: %d",k);

}
