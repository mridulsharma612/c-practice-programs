#include"stdio.h"
#include"graphics.h"
int main()
{
    int gd = 0,gm;
    initgraph(&gd,&gm,"");
    setcolor(14);
    line(200,250,400,450);
    //system("color 8");
    getch();
    closegraph();
}
