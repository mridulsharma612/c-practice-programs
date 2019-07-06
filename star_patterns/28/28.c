/*


     A
    CB
   FED
  JIHG
 ONMLK
UTSRQP

*/

#include<stdio.h>
void main()
{
    int i,j,n,k=64,a;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k+i;
        a=k;
        for(j=1;j<=n;j++)
        {
            if(j>=n+1-i){

                printf("%c",a);
                a--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

