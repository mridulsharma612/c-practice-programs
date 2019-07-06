#include<stdio.h>
void input(int *p,int n)
{
    int i;
    printf("Now enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
}

void display(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
}


void sort(int *p,int n)
{
    int round, i,temp;
    for(round=0;round<n;round++)
    {
        for(i=0;i<n;i++)
        {
            if(*(p+i) > *(p+i+1))
            {
                temp = *(p+i); // a[i] = *(p+i)
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
    }
}


void main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    printf("Your array is\n");
    display(a,n);
    sort(a,n);
    printf("After sorting \n");
    display(a,n);
}
