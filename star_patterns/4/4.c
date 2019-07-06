/*

********
*******
******
*****
****
***
**
*


*/

#include<stdio.h>
void main()
{
    int z,n,i,j;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    z=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=z;j++)
        {
            printf("*");
        }
        printf("\n");
        z--;
    }
}
