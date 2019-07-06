#include"stdio.h"

void f(void);
void main()
{
    f();
    f();
}

void f()
{
    static int i;
    i++;
    printf("i=%d\n",i);
}
