#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,x=1;
    while(1){
            x=1;
    printf("Enter base\n");
    scanf("%d",&a);
    printf("Enter power\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        x*=a;
    }
    printf("Result: %d\n",x);
    getch();
}
}
