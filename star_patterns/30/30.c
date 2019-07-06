/*


*         *
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
*         *

*/


#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the number of stars you want in one diagonal of cross\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i || j==n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
