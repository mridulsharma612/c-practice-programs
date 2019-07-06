/*

1
10
101
1010
10101
101010
1010101
10101010
101010101

*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%d",j%2);
        }
        printf("\n");
    }

}
