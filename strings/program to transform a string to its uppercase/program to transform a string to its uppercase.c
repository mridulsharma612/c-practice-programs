#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter a string\n");
    gets(a);
    printf("String after converting is \n%s",strupr(a));
}
