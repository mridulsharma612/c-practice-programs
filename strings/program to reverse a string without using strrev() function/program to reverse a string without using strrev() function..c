#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[100],temp;
    printf("Enter a string\n");
    gets(a);
    for(i=0;i<strlen(a)/2;i++)
    {
        temp = a[i];
        //printf("%c\n",temp);
        a[i] =a[strlen(a)-i-1];
        a[strlen(a)-i-1] = temp;
    }
    printf("Reverse of the string is\n");
    puts(a);
}
