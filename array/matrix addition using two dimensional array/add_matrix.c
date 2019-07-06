#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter 9 elements for first matrix\n");
    for(i=0;i<=2;i++)
    {
        printf("Enter elements for row %d\n",i+1);
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter 9 elements for second matrix\n");
    for(i=0;i<=2;i++)
    {
        printf("Enter elements for row %d\n",i+1);
        for(j=0;j<=2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Result\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            C[i][j]= A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
