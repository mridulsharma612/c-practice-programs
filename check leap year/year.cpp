#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    while(1){
    printf("Type year\n");
    scanf("%d",&y);
    y%100==0?y%400==0?printf("Yes\n"):printf("No\n"):y%4==0?printf("Yes\n"):printf("No\n");
    _getch();
}
 return 0;
}
