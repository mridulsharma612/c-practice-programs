#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(i=1;i>0;i++){         //for(i=1;i<=a;i++)
                            //printf("%d",2*i-1)
        if(i%2!=0)
    {
        printf("%d,",i);
    }
    if(i==2*a)
    {
        break;
    }
}
}
