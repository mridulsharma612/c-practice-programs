#include<stdio.h>
main()
{
int i=1,x;
while(i<=5)
{
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>0)
    {
        break;
    }
   i++;

}
    i==6?printf("ends normally\n"):printf("applied break\n");
    fun();
}

fun()
{

int i=1,x;
while(i<=5)
{
    printf("Enter a number\n");
    scanf("%d",&x);
    /*if(x>0)
    {
        break;
    }*/
   i++;

}
    i==6?printf("ends normally"):printf("applied break");
    getch();
}

