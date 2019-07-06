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
    FILE *file;
    file = fopen("myfile.dat","ab+");
    BOOK b1;
    printf("Enter book id, title and price\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    fflush(stdin);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,file);
    fclose(file);
}
