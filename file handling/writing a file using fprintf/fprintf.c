#include<stdio.h>

void main()
{
    FILE *file;
    int a,b;
    file = fopen("sum.txt","w");
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    fprintf(file,"Sum of %d and %d is %d",a,b,a+b);
    fclose(file);


}
