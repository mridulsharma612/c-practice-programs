#include<stdio.h>
main()
{
    int x,y;
    printf("Type a number\n");
    scanf("%d", &x);
    printf("Type the number to check divisibility with\n ");
    scanf("%d",&y);
    if (x%y==0)
        printf("yes the number %d is divisible by %d",x,y);
    else
        printf("no the number %d is not divisible by %d",x,y);

        getch();
}
