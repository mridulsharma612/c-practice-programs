#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    for(x=0;x<=255;x++)
    {
        /*if(x%24==0)
        {
            getch();
            system("cls");
        }*/
        printf("%d  %c\n\n",x,x);

    }
    getch();
}
