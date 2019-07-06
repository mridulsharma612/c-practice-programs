/*
0
0 1
0 2 4
0 3 6 9
0 4 8 12 16
0 5 10 15 20 25
0 6 12 18 24 30 36
0 7 14 21 28 35 42 49

*/

#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n;j++)
        {
            if (j<=i)
            {
                printf("%d ",k);
                k+=(i-1);
            }
        }
        printf("\n");
    }
}
