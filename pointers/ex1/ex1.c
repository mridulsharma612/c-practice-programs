#include<stdio.h>


void main()
{
    int x=5, *y, z[10]={1,2,3,4},*k;
    k = malloc(5);
     y=z;
     k+1 = *(y+1);
//    z = y;
    printf("%d %d %d",x,*y,*(k+1));
    //printf("%d",&x);
}
