/*
ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
*/

#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number of line \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=65;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-1+i || j<=n+1-i)
                {
                    printf("%c",k);
                    j<n?k++:k--;

                }
            else

               {
                    printf(" ");
                    j==n?k--:k;

               }

        }
        printf("\n");
    }
}
