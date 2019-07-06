#include <stdio.h>
#include <stdlib.h>

int calci();
int main()
{
   printf("\n\n\nThe missing number is: %d", calci());
    return 0;
}

int calci()
{
     int n,i;
     printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
       {scanf("%d/n",&a[i]);
       }
    int temp;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    int count=0,j;
    for(i=1;i<=(a[n-1]+1);i++)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            if(i==a[j])
                {count++;}
        }
        if(count==0)
            {
            return i;
            break;
            }
    }

}

