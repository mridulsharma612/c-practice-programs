/*

    1
   232
  34543
 4567654
567898765

*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=2*n-1;j++)
        {

            if(j>=n+1-i && j<=n-1+i)
            {
                printf("%d",k);
                j<=(2*n-1)/2?k++:k--;
            }
            else
                printf(" ");

        }
        printf("\n");
    }
}
