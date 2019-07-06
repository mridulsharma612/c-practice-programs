#include<stdio.h>

main()
{
    int x, a, b;
    printf("Enter two numbers\n");                //to find greatest number of two numbers
    scanf("%d %d", &a,&b);
    /*if(a>b)
        x=a;
    else            //same can be achieved by conditional operator
        x=b;*/
    x=a>b?a:b;  //conditional operator
    printf("Greater number is %d",x);
    getch();
}
