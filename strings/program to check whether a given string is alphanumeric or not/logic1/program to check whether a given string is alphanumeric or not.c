#include<stdio.h>
#include<string.h>
void main()
{
    int a,i,j;
    char str[200];
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            break;

    }
    for(j=0;str[j];j++)
    {
        if(str[j]>='0'&&str[j]<='9')
            break;
    }
   // printf("i=%d  strlen= %d j = %d\n",i,strlen(str),j);
    if(i!=strlen(str)  && j!=strlen(str))
        printf("Yes, the string is alphanumeric");
    else
        printf("No, the string is not alphanumeric");
}
