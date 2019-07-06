#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a/2000)
    printf("%d notes of 2000 Rs\n",a/2000);
    a-=((a/2000)*2000);
    if(a/500)
    printf("%d notes of 500 Rs\n",a/500);
    a-=((a/500)*500);
    if(a/200)
    printf("%d notes of 200 Rs\n",a/200);
    a-=((a/200)*200);
    if(a/100)
    printf("%d notes of 100 Rs\n",a/100);
    a-=((a/100)*100);
    if(a/50)
    printf("%d notes of 50 Rs\n",a/50);
    a-=((a/50)*50);
    if(a/20)
    printf("%d notes of 20 Rs\n",a/20);
    a-=((a/20)*20);
    if(a/10)
    printf("%d notes of 10 Rs\n",a/10);
    a-=((a/10)*10);
    if(a/5)
    printf("%d coins of 5 Rs\n",a/5);
    a-=((a/5)*5);
    if(a/2)
    printf("%d coins of 2 Rs\n",a/2);
    a-=((a/2)*2);
    if(a/1)
    printf("%d coins of 1 Rs\n",a/1);

}
