#include<stdio.h>
#include<conio.h>
void main()
{
   int x=1;
   int a,i;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        x*=i;
    }
    printf("Result: %lld",x);
    getch();

}
/*while(a>=1)
{
    x*=a;
    a--;
}
*/
