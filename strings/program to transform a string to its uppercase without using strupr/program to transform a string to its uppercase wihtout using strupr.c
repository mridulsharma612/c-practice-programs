#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[100];
    printf("Enter a string\n");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i] -= 32;
        }
    }
    printf("String after converting is\n%s",a);
}
