#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character\n");
    //scanf("%ch",&ch);
    ch= getch(ch);
    printf("The ascii code of %c is: %d",ch,ch);
}
