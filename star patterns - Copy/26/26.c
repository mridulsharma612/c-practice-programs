/*

          1
         212
        32123
       4321234
      543212345
     65432123456
    7654321234567
   876543212345678
  98765432123456789
 0987654321234567890
109876543212345678901

*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter number of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i){

                printf("%d",k%10);
                j<n?k--:k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
