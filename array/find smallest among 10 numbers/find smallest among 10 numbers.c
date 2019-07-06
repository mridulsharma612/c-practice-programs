#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    int great[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&great[i]);
    }
    for(i=0;i<n;i++)
    {
      if(great[0]>great[i])
      {
          great[0] = great[i];
      }
    }
    printf("Smallest number is: %d",great[0]);
}

