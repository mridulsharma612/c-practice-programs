/*
    1
   12
  123
 1234
12345
 1234
  123
   12
    1

    */
#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=(n+1)/2;j++)
        {
            if(j>(n+1)/2-i && j>=i-(n-1)/2 ){
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
