#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        printf("%d, ",2*i-1);
    }
    getch();
}
/*while(a)
{
    printf("%d",2*a-1);
    a--;
}
*/
