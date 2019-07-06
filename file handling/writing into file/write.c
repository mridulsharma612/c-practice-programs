#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int i ;
    FILE *file_pointer;
    char string[1000] ;
    file_pointer = fopen("file1.txt","w");
    if(file_pointer == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    printf("Enter a string to copy into the file\n");
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        fputc(string[i],file_pointer);
    }
    fclose(file_pointer);
    printf("The string is copied");
}
