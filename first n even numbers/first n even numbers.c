#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(i=0;i>=0;i+=2)  //for(i=1;i<=a;i++)
                        //printf("%d",i*2)
    {
        printf("%d, ",i);
        if(i==2*a)
        {
            break;
        }
    }
}
