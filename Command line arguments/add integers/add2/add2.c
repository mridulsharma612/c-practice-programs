#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int integer(char *);
int main(int argc, char *argv[])
{
    int a=0,i;
    for(i=1;i<argc;i++)
        a +=integer(argv[i]);
    printf("Sum is %d",a);
    getch();
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


