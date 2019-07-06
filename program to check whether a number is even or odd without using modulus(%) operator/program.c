#include<stdio.h>
#include<conio.h>
void main()
{
    int a,z;
    while(1){
    printf("Enter a number\n");
    scanf("%d",&a);
    z=a&1; //similarly we can use bitwise or and xor operation also
    if(z==1) //or if(a&1) can also be used
    {
        printf("odd number\n");

    }
    else
    {
        printf("Even number\n");

    }

    getch();
    }
}
