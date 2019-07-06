/*
   *
  ***
 *****
*******
 *****
  ***
   *

*/



#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of lines\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i<=(n+1)/2)
            {
            if(j>=n+1-i && j<=n-1+i)
                printf("*");
            else
                printf(" ");
            }
            else
            {
                if(j<=n*2-i && j>=i)
                    printf("*");
                else
                    printf(" ");
            }
            }
            printf("\n");
        }
}

/*
simpler logic


k=0;
for(i=1;i<=n;i++)
{
    i<=(n+1)/2?k++:k--;
    for(j=1;j<=2*n-1;j++)
    {
    if(j>=(n+1)/2 +1 -k && j<=(n+1)/2 -1 +k)
        printf("*");
    else
        printf(" ");
    }
    printf("\n");
}
*/
