#include"stdio.h"
#include"conio.h"

void main(){


    int n = 1,i;
    printf("Before the label\n");
    lable:
        printf("%d ",n);
        for(i=0;i<10;i++)
            printf("%d ",n++);
    printf("Going to the lable from here\n");
    if(n<20)
        goto lable;
}


