/*
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/
#include<stdio.h>
void main()
{
    int i,j,n,k=0;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i<=(n+1)/2?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j<=(n+1)/2+1-k || j>=(n+1)/2-1+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
