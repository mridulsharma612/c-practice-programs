#include<stdio.h>

#include"F:\c practice programmes\star patterns - Copy\1\1.c"
#include"F:\c practice programmes\star patterns - Copy\3\3.c"
#include"F:\c practice programmes\star patterns - Copy\2\2.c"  //  main function's names are changed to star1,
                                                               // star2 and star3 in the source c file

void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        star1();
        break;
    case 2:
        star2();
        break;
    case 3:
        star3();
        break;
    default:
        printf("Enter between 1 and 3");
    }
}
