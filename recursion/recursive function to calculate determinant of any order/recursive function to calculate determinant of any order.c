#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int determinant(int ,int);
//int order;
int determinant(int order,int a[order][order])
{
    int det,b[order-1][order-1],m,n,s=1,c,i,j;
  /*  for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }*/
    if(order==1) // base condition + condition for determinant of order 1
    {
        return (a[0][0]);
    }
    else
    {
        det=0;
        for(c=0;c<=order-1;c++) // the main loop
        {
            m=0; // for every recursive call
            n=0;
            for(i=0;i<order;i++)                       //
            {
                for(j=0;j<order;j++)                     //storing the minor of a[0][c]
                {
                    b[i][j]= 0;                           //in array b
                    if(i!=0 && j!=c)
                    {
                        b[m][n] = a[i][j];               //
                        if(n<order-2)
                        {
                            n++;                     // increment of m and n
                        }
                        else
                        {
                            n=0;
                            m++;
                        }

                    }
                }
            }
            det = det + s*a[0][c]*determinant(order-1,b);     // recursive call main logic
            s *= -1;
        }
    }
    return (det);


}





void main()
{
    int order,i,j,result;
    printf("Enter the order of the determinant\n");
    scanf("%d",&order);
    int a[order][order];
    for(i=0;i<order;i++)
    {
        printf("Enter row %d\n",i+1);
        for(j=0;j<order;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    result = determinant(order,a);
    printf("RESULT : %d",result);
}

