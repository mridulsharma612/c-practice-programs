/*

 1
 8  2
 14  9  3
 19  15  10  4
 23  20  16  11  5
 26  24  21  17  12  6
 28  27  25  22  18  13  7

 */

#include<stdio.h>
void main()
{
    int i,j,k=1,n,a,b,c;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    b=n;
    for(i=1;i<=n;i++)
    {

        a=k;
        c=b;
        for(j=1;j<=n;j++)
        {

            if(j<=i)
            {
                printf(" %d ",a);
                a-=(c);

            }
            c++;
        }
        printf("\n");
        k=k+b;
        b--;
    }
}
