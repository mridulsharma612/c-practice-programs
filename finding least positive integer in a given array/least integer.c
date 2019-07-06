#include<stdio.h>

void main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("The least positive integer is: %d",least(n));
}

int least(int n)
{
    int i,arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=1;
    int j;
   while(1)
   {
       for(j=0;j<n;j++)
       {
           if(i == arr[j])
            break;
       }
       if(j==n)
        return i;
       i++;
   }

}
