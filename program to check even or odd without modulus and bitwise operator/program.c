#include<stdio.h>
#include<conio.h>
void main()
{
    int a,z;
    while(1){
    printf("Enter a number\n");
    scanf("%d",&a);

    if((a/2)*2==a)
    {
        printf("Even number\n");

    }
    else
    {
        printf("Odd number\n");
    }
}
}
