#include<stdio.h>
int reverse(int n)
{
    int a;
    if(n<1)
        return 1;
    printf("%d, ",n);
    reverse(n-1);
}

void main()
{
    int n,i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    reverse(n);
}

