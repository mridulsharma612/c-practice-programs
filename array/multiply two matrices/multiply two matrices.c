#include<stdio.h>
void main()
{
    int i,j,A[3][3],B[3][3],C[3][3];
    printf("Enter numbers of first matrix\n");
    for(i=0;i<3;i++)
    {
        printf("Enter numbers of row %d\n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    }
    printf("Enter numbers of second matrix\n");
    for(i=0;i<3;i++)
    {
        printf("Enter numbers of row %d\n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){

        C[i][j] = ((A[i][0]*B[0][j]) + (A[i][1]*B[1][j]) + (A[i][2]*B[2][j]));
        }
    }
    printf("Result\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){

            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
