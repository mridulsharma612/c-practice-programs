/*
     1
    121
   12321
  1234321
 123454321
12345654321

*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
            for(j=1;j<=2*n-1;j++)
            {
                if(j>=n+1-i && j<=n-1+i)
                {
                    printf("%d",k);
                    j<n?k++:k--;
                }
                else
                    printf(" ");
            }
            printf("\n");

    }
}
