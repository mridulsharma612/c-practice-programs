#include<stdio.h>
void main()
{
    int i,j;
    char str[100];
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==str[i+1])
        {
            for(j=i+1;str[j];j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
        }
    printf("After removing adjacent duplicate characters\n");
    puts(str);
}
