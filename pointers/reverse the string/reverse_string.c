#include<stdio.h>
char* reverse(char *);
char* reverse(char *p)
{
    int i,l;
    char temp;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        temp = *(p+i);
        *(p+i) = *(p+l-1-i);
         //printf("%d",l);
        *(p+l-1-i) = temp;
    }
    return (p);
}

void main()
{
    char a[100];
    printf("Enter the string\n");
    gets(a);
    printf("Reverse of the string is\n%s",reverse(a));
}
