#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *ptr;
    char str[100];
    ptr = fopen("file1.txt","a+");
    while(fgets(str,8,ptr))
    {
        printf("%s",str);
    }
    printf("\nNow edit this file\n");
    gets(str);
    fputs(str,ptr);
    fclose(ptr);
    ptr = fopen("file1.txt","r");
    printf("After editing your file\n");
    while(fgets(str,8,ptr))
    {
        printf("%s",str);
    }
    fclose(ptr);

}
