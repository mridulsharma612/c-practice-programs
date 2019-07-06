#include<stdio.h>
char* duplicate(char *);
void main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    printf("After removing adjacent characters\n%s",duplicate(str));
}

char* duplicate(char *p)
{
    int i,j;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)==*(p+i+1))
        {
            for(j=i;*(p+j);j++)
                *(p+j)=*(p+j+1);
            i--;
        }
    }
    return (p);
}
