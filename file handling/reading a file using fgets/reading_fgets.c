#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *ptr;
    char str[10];
    ptr = fopen("file1.txt","a+");
    if(ptr == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    while(fgets(str,8,ptr))
    {
        printf("%s",str);

    }
    fclose(ptr);

}
