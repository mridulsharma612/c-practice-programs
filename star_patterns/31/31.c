/*


ABCDEFGHIJKLMNO
ABCDEFG IJKLMNO
ABCDEF   JKLMNO
ABCDE     KLMNO
ABCD       LMNO
ABC         MNO
AB           NO
A             O

*/


#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=65;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n+1-i || j>=n-1+i)
                printf("%c",k);
            else
                printf(" ");
            k++;
        }
        printf("\n");
    }
}
