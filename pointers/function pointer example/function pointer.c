#include<stdio.h>
int addition(int x)
{
    printf("%d ",x);
    return(x+1);
}

void main()
{
    int (*p)(int); // declaration
    p=addition; // assignment
    printf("%d",p(5));  // call
}

