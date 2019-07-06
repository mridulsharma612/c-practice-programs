/*


        1
       12A
      123AB
     1234ABC
    12345ABCD
   123456ABCDE
  1234567ABCDEF
 12345678ABCDEFG
123456789ABCDEFGH

*/
#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='1';
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
                {
                 if(j==n+1)
                        k='A';

                printf("%c",k);
                k++;
                }
            else
                printf(" ");
        }
        printf("\n");
    }
}
