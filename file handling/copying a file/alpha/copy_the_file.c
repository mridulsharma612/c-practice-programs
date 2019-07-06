#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *original, *copy, *temp;
    char original_path[1000], copy_path[1000], ch;
    printf("Enter the path of the file with extension\n");
    gets(original_path);
    original = fopen(original_path, "rb");
    if(original == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    printf("Now enter the path where file is to be copied\n");
    gets(copy_path);
    copy = fopen(copy_path,"wb");
    if(copy == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    ch = fgetc(original);
    while(!feof(original))
    {
        fputc(ch,copy);
        ch = fgetc(original);
    }

    printf("File is copied");
    fclose(original);
    fclose(copy);
}
