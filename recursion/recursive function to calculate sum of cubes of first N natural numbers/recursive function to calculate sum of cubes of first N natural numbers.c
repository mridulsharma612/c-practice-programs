#include<stdio.h>
int cube(int n)
{
    if(n<=1)
        return 1;
    return((n*n*n) + cube(n-1));
}

void main()
{
    int a;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    printf("Result: %d",cube(a));
}
