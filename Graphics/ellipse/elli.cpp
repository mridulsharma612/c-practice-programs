#include"stdio.h"
#include"graphics.h"
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    ellipse(400,300,0,280,100,150);
    getch();
    closegraph();
}
