/*


         1
        A B
       1 2 3
      A B C D
     1 2 3 4 5
    A B C D E F
   1 2 3 4 5 6 7
  A B C D E F G H
 1 2 3 4 5 6 7 8 9
A B C D E F G H I J

*/

#include<stdio.h>
void main()
{
    int i,j,n,k,alpha,num;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        alpha=65;
        num=1;
        for(j=1;j<=2*n-1;j++)
        {

            if(j>=n+1-i && j<=n-1+i && k){

                if(i%2==0)
                {
                    printf("%c",alpha);
                    alpha++;
                }
                else
                {
                    printf("%d",num);
                    num++;
                }
                k=0;
            }
            else{

                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
