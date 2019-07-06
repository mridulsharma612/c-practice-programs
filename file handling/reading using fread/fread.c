#include<stdio.h>
#include<stdlib.h>



typedef struct
{
    int bookid;
    char title[100];
    float price;
}BOOK;

void main()
{
    FILE *file1;
    file1 = fopen("F:/c practice programmes/file handling/writing using fwrite/myfile.dat","ab+");

    BOOK b1;
    if(file1 == NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }

    while(fread(&b1,sizeof(b1),1,file1))
    {
               printf("%d %s %f\n",b1.bookid,b1.title,b1.price);
    }

    fclose(file1);
}
