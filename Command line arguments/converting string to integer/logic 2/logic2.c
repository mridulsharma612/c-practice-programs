#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
int integer(char *);
int main (int argc, char *argv[])
{
    int a;
    a = integer(argv[1]);
    printf("a = %d",a);
    getch();
    return 0;
}

int integer(char *str)
{
    int x,i;
    for(x=0,i=0;str[i];i++)
    {
        if(str[i]=='-')
            i++;
        if(str[i]>= 48 && str[i]<= 57)
        {
            x = x*10 + (str[i] - 48);
        }
        else
            break;
    }
    if(str[0]=='-')
        x = -x;
    return x;
}

