#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *original, *copy;
    int ch;
    char original_path[1000], copy_path[1000];
    printf("Enter the path of the file with extension\n");
    gets(original_path);
    original = fopen(original_path, "rb");
    if(original == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    printf("Enter the path of copy \n");
    gets(copy_path);
    copy = fopen(copy_path,"wb");
    if(copy == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    while(fread(&ch,sizeof(ch),1,original))
    {
        fwrite(&ch,sizeof(ch),1,copy);
    }
    printf("File is copied");
    fclose(original);
    fclose(copy);
}

