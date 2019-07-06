#include<stdio.h>

int main()
{
    int a,i,j,n;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    printf("Now enter %d numbers\n",n);
    int number[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &number[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
              /*
         * Place currently selected element array[i]
         * to its correct place.
         */
            if(number[i] < number[j])
            {
                  /*
             * Swap if currently selected array element
             * is not at its correct position.
             */
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers in descending order\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",number[i]);
    }

}

