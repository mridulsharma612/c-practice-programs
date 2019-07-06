#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int i,temp,j;
    srand(time(NULL));
    for(i=0;i<=100;i++)
    {
        printf("%d ",rand()%11);
    }
}
