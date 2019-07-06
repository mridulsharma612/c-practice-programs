/*

A
BA
CBA
DCBA
EDCBA
FEDCBA
GFEDCBA
HGFEDCBA
IHGFEDCBA
JIHGFEDCBA

*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=64+i;
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("%c",k);
                k--;

            }
        }
        printf("\n");
    }
}
