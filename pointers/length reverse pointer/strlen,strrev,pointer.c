#include<stdio.h>
char* reverse(char*);
int length(char*);

int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return (i);
}

char* reverse(char *p) // char * means we return address
{
    int i,len;
    char temp;
    len = length(p);
    for(i=0;i<len/2;i++)
    {
       // printf("%d\n",i);
        temp = *(p+i);
       // printf("temp = %c *(p+i)=%c\n",temp,*(p+i));
        *(p+i) = *(p+len-1-i);
       // printf("*(p+i) = %c *(p+len-1-i)=%c\n",*(p+i),*(p+len-1-i));
        *(p+len-1-i) = temp;
       // printf("temp = %c *(p+len-1-i)=%c\n",temp,*(p+len-1-i));

    }

    return(p);

}

void main()
{
    char a[100];
    printf("Enter the string\n");
    gets(a);
    printf("Length of the string is %d\n",length(a));
    printf("%s",reverse(a));

}
