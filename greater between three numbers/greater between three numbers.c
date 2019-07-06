#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    while(1){
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The greater number is: ");

    a>b?a>c?printf("%d\n",a):printf("%d\n",c):b>c?printf("%d\n",b):printf("%d\n",c);
    getch();
}
}
