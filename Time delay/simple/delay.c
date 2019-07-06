#include"stdio.h"
#include"dos.h"
#include"time.h"
void main()
{
    int i;
    for(i = 0;i<10;i++)
    {
        _sleep(1000); // use sleep or delay (accepts time in miliseconds
        printf("Loop no. %d\n",i);
    }
}
