/*

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *

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
            if(i%2==0 && j%2==0 && j<=n-1+i && j>=n+1-i)
                printf("*");
            else if(i%2!=0 && j%2!=0 && j<=n-1+i && j>=n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

/* logic 2


introduce another variable k in first loop assign it 1;

in second loop



if(j>=n+1-i && j<=n-1+i && k)
{
printf("*");
k=0
}
else
{
printf(" ");
k=1;
}



*/
