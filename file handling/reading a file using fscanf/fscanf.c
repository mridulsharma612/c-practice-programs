#include<stdio.h>

void main()
{
    FILE *file;
    int a, b;
    file = fopen("F:\\c practice programmes\\file handling\\writing a file using fprintf\\sum.txt", "r");
    fscanf(file,"Sum of %d and %d is",&a,&b);
    printf("a = %d  b = %d  a+b = %d",a,b,a+b);
    fclose(file);
}
