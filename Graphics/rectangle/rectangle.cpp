#include"graphics.h"
int main()
{
 int gd=0,gm,i;
 initgraph(&gd,&gm,"");
 rectangle(250,200,400,150);
 getch();
 closegraph();

}
