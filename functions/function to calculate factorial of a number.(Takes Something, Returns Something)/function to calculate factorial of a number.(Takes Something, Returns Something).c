#include<stdio.h>
int factorial(int );
int factorial(int fact)
{
    int i,k=1;
    for(i=1;i<=fact;i++)
    {
        k*=i;
    }
    return (k);
}

void main()
{
    int n,m;
    printf("Enter a number to find it's factorial\n");
    scanf("%d",&n);
    m=factorial(n);
    printf("Result: %d",m);

}
