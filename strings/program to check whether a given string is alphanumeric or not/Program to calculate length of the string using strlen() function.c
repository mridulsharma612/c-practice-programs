#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter a string\n");
    gets(a);
    printf("Your string contains %d characters",strlen(a));
}
