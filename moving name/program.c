#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void main()
{
    int x=40,y=10;
    char ch;
    gotoxy(x,y);
    printf("Sandeep");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case 27:exit(0);
        }
        system("cls"); //clears the screen
        gotoxy(x,y);
        printf("Sandeep");

        }
    }

