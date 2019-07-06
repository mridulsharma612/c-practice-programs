#include<stdio.h>
#include<string.h>
int get_max_index(int a[],int size)
{
    int max,max_index,i;
    max=a[0];
    max_index = 0;
    for(i=1;i<size;i++)
    {
        if(max<a[i])
        {
            max = a[i];
            max_index  = i;

        }
    }
    return (max_index);
}

void ascending_sort(int a[],int size)
{
    int max_index,temp;
    if(size>1)
    {
        max_index = get_max_index(a,size);
        temp = a[size-1];
        a[size-1] = a[max_index];
        a[max_index] = temp;
        ascending_sort(a,size-1);
    }
}

int get_lowest_index(int a[],int size)
{
    int low,low_index,i;
    low=a[0];
    low_index = 0;
    for(i=1;i<size;i++)
    {
        if(low>a[i])
        {
            low = a[i];
            low_index  = i;

        }
    }
    return (low_index);
}

void descending_sort(int a[],int size)
{
    int low_index,temp;
    if(size>1)
    {
        low_index = get_lowest_index(a,size);
        temp = a[size-1];
        a[size-1] = a[low_index];
        a[low_index] = temp;
        descending_sort(a,size-1);
    }
}


void main()
{
    int size,i;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Now enter %d numbers\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the order you want to sort ascending or descending\n");
    char order[20];
    scanf("%s",order);
    if(strcmp(order,"ascending")==0){

    ascending_sort(a,size);
    }
    if(strcmp(order,"descending")==0)
    {
        descending_sort(a,size);
    }
    printf("Result:\n");
      for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }


}
