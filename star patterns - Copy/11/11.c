/*

*
**
***
****
*****
****
***
**
*

*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)/2;j++)
        {
            if(j<=i && j<=n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
