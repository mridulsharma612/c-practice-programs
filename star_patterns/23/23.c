/*

**********
*        *
* ****** *
* *    * *
* *    * *
* *    * *
* *    * *
* ****** *
*        *
**********

*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1 || j==1 || i==n || j==n) || (i>=3 && j>=3 && i<=n-2 && j<=n-2) && (i==3||j==3||i==n-2||j==n-2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
