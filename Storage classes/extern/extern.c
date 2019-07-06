#include"stdio.h"

void main()
{
    extern int x;
    printf("x=%d\n",x);
    f();
    printf("x=%d\n",x);
}

int x;
int y;
void f()
{
    int y =7;
    x++;
    y++;
    printf("x=%d\n",x);
    printf("y=%d  extern not used\n",y);
   { extern y;
    printf("y=%d  extern used\n",y);
}
}
