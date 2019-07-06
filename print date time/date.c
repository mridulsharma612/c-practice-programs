#include<stdio.h>
#include<Windows.h>
void main()
{
    SYSTEMTIME date;
    GetSystemTime(&date);
    printf("%d / %d / %d",date.wDay,date.wMonth,date.wYear);
}
