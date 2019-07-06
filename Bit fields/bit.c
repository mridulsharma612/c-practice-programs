#include"stdio.h"

typedef struct
{
    unsigned char d:5;
    unsigned char m:4;
    unsigned char y;
}date;

void main()
{
    date d={24,06,2019};
    printf("Date is %d/%d/%d\n",d.d,d.m,d.y);
    printf("Size of d = %d\n",sizeof(d));
    char y;
    printf("Size of y = %d",sizeof(y));
}
