#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,x=0;
    printf("Enter the number of terms\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        x +=(i*2);
    }
    printf("Result: %d",x);
    getch();
}
/*while(i<=2*a)
{
    x+=i;
    i+=i;
}
*/
