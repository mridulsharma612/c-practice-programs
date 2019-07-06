#include<stdio.h>
void main()
{
    int n,i,j,count=0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;count<n;i++)
    {

        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j){

            printf("%d ",i);
            count++;
        }

    }
}
