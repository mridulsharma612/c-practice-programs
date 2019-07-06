#include<stdio.h>
#include<Windows.h>
void main()
{
    int d,m,y,x,z;
    printf("Enter your birth month\n");
    scanf("%d",&m);
    printf("Enter your birth year\n");
    scanf("%d",&y);
    SYSTEMTIME age;
    GetSystemTime(&age);
    if(m>age.wMonth)
    {
        y++;
        x=12+age.wMonth-m;
    }
    printf("You are %d years and %d months old",age.wYear-y,z=m>age.wMonth?x:age.wMonth-m);

}
