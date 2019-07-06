#include<stdio.h>
void main()
{
    int i,j,n,odd=0,even=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int num[n];
    printf("Now enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            even+=num[i];
        }
        else
        {
            odd+=num[i];
        }
    }
    printf("Sum of even numbers: %d\nSum of odd numbers: %d",even,odd);
}
