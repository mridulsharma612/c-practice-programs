#include<stdio.h>
void main()
{
    int i,a=0,b=0;
    char str[200];
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            a=1;
        if(str[i]>='0' && str[i]<='9')
            b=1;
    }
    if(a&&b)
        printf("Yes, the string is alphanumeric");
    else
        printf("No, the string is not alphanumeric");
}
