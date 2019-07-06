#include"stdio.h"
#include"math.h"
#include"conio.h"
int string_to_integer(char *);
int main(int argc, char *argv[])
{
    int a;
    a = string_to_integer(argv[1]);
    printf("a = %d\n",a);
    getch();
    return 0;
}

int string_to_integer(char *str)
{
    int a=0,i,j=-1,b;
    for(i=0;*(str+i);i++)
    {
        if(*(str +i)=='-')
        i++;
        if(*(str+i)>= '0' && *(str +i)<='9')
            j++;
        else
            break;
    }
    for(i=0;*(str+i);i++)
    {
        if(*(str +i)=='-')
        i++;
        if(*(str+i)>= '0' && *(str +i)<='9')
        {
            b= pow(10,j) +0.5;
            a+= (*(str+i)-48)*b;
            j--;
        }
        else
            break;
    }
    if(*(str+0)=='-')
        a=-a;
    return a;
}

