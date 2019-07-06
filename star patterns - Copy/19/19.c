/*
        A1
       AB12
      ABC123
     ABCD1234
    ABCDE12345
   ABCDEF123456
  ABCDEFG1234567
 ABCDEFGH12345678
ABCDEFGHI123456789

*/
#include<stdio.h>
void main()
{
    int n,i,j,k,a;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=65;
        a=1;
        for(j=1;j<=2*n;j++)
        {
           if(j>=n+1-i && j<=n+i)
                {
                    if(j<=n){
                        printf("%c",k);
                        k++;
                    }
                    else
                    {
                        printf("%d",a);
                        a++;
                    }
                }
                else
                    printf(" ");
        }
        printf("\n");

    }
}
/*
a simpler logic

for(i=1;i<=n;i++)
{
    k='A';
    for(j=1;j<=2*n;j++)
    {
    if(j<=n-1+i && j>=n+1-i)
    {
    if(j==5)
        k='1';
        printf("%c",k);
        k++;
    }
    else
    printf(" ");

}

}

*/
