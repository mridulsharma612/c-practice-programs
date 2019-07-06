#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch;
    FILE *pointer;
    pointer = fopen("file1.txt","r");
    if(pointer == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    ch = fgetc(pointer);
    while(!feof(pointer))
    {
        printf("%c",ch);
        ch = fgetc(pointer);
    }
    fclose(pointer);
}
