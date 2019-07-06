#include<stdio.h>
struct date
{
    int d,m,y;
};

struct date d1; // global variable
void main()
{
    struct date today; // local variable
    today.d=14;
    today.m= 9;
    today.y = 2017;
    printf("%d/%d/%d\n",today.d,today.m,today.y);
    printf("Now enter today's date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d/n",&d1.d,&d1.m,&d1.y);
    printf("Date: %d/%d/%d",d1.d,d1.m,d1.y);
}
