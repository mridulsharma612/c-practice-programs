#include<stdio.h>
void main()
{
    int i, *p,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    p = &a[0];
    printf("Now enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
