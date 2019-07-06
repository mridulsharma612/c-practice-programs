#include<stdio.h>
void main()
{
    int i,n;
    float sum=0;


    printf("Enter the total number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Now enter the elements\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Result: %f",sum/n);
}
