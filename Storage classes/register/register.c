#include"stdio.h"
int main()
{
    register int x = 4;
    int y=0;
    y+=x;
    x--;
    y+=x +5;
    y=x++;
    x*y*x*y;
    y/x/x/x/x;
    y=y+x++;

    return(x);

}
