#include<stdio.h>
int natural(int n)
{
    if (n==1)
        return(1);
    return(natural(n-1)+1);
}

void main()
{
    int n,i
    ;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            printf("%d, ",natural(i));

    }
}
