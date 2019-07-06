#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void main (int argc, char *argv[])
{
    int i,k=1;
    for(i=atoi(argv[1]);i>0;i--)
        k*=i;
    printf("Factorial is %d",k);
    getch();
}
