#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        printf("%d, ",i*2);
    }
    getch();
}
/*while(a)
{
  printf("%d",a*2);
  a--;
}
*/
