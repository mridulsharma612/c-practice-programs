#include"graphics.h"
#include"dos.h"



int main()
{
    int gd=0,gm,i,j=1;
    initgraph(&gd,&gm,"");
    for(i=50;i<500;i++){
            setcolor(j);
    delay(100);
    circle(300,200,i);
    j++;
    if(j>15)
        j=1;
    //getch();
    }
    getch();

    closegraph();
    return 0;
}

