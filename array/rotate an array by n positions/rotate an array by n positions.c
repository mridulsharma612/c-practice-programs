#include<stdio.h>
#include<string.h>
int main()
{
    int size_of_array,i,j,temp,n;

    printf("Enter size of array\n");
    scanf("%d",&size_of_array);
    printf("Now enter %d number\n",size_of_array);
    int arr[size_of_array];

    for(i=0;i<size_of_array;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:\n");

    for(i=0;i<size_of_array;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the number of positions and direction(left\\right) you want to rotate\n");
    char di[6];
    scanf("%d %s",&n,di);

    if(strcmp(di,"right")==0 ){  //strcmp(a,b) compares a string and returns 0 if true (present in string.h)

    for(i=0;i<n;i++)
    {
        temp = arr[size_of_array-1];
        for(j=size_of_array-1;j>0;j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    }

  else if(strcmp(di,"left")==0 ){

    for(i=0;i<n;i++)
    {
        temp = arr[0];
        for(j=0;j<size_of_array;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[size_of_array-1] = temp;
    }
  }
  else
    return 0;

    for(i=0;i<size_of_array;i++)
    {
        printf("%d ",arr[i]);
    }
}
