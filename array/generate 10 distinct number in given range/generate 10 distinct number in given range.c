#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int temp,max,min,j,i;
    printf("Enter minimum and maximum range\n");
    scanf("%d %d",&min,&max);
    int random[max-min];
    srand(time(0));   // srand() provides seed limit for rand function.using time function sets it at different value every time
    for(i=0;i<max-min;i++){          //time(0) gives us time in seconds since 00:00:00 UTC, January 1, 1970 (present in time.h)

        temp = (rand()%max) +1 ;   // m%n gives value ranging between 0 and n-1
        for(j=0;j<=i-1;j++)
        {
            if(temp == random[j])
                break;
        }
        if(i != j || temp<min || temp>max)
            i--;
        else
            random[i] = temp;
    }
    printf("Result: \n");
    for(i=0;i<max-min;i++)
    {
        printf("%d\n",random[i]);
    }
}
