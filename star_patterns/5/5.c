/*

      *
     ***
    *****
   *******
  *********
 ***********
*************

*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}
