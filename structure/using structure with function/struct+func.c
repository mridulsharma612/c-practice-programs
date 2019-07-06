#include<stdio.h>
struct book
{
    int bookid;
    char title[100];
    float price;
};

struct book input()
{
    struct book b;
    printf("Enter book id, title, price\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return (b);
}

void display(struct book b)
{
    printf("Bookid\t\tTitle\t\tPrice\n%d\t\t%s\t\t%f rs",b.bookid,b.title,b.price);
}


void main()
{
    struct book b1;
    b1 = input();
    display(b1);
}
