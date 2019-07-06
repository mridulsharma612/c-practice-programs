/*

76543210
6543210
543210
43210
3210
210
10
0

*/
#include<stdio.h>
void main()
{
    int i,n,j,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=n-i;
        for(j=1;j<=n;j++)
        {
            if(j<=n+1-i)
               {
                printf("%d",k);
                k--;
               }


        }
        printf("\n");
    }
}
