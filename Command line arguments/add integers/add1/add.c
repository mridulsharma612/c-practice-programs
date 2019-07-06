#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
int main(int argc, char *argv[])
{
    int i,x=0;
    for(i=1;i<argc;i++)
        x += atoi(argv[i]);
    printf("Sum is %d",x);
    getch();
}
