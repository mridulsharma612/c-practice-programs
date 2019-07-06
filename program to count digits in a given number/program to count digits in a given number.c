#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,x=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(i=0;i>=0;i++)
    {

        if(a/x==0)
        {
            printf("Entered number has %d digits\n",i);
            break;
        }
        x*=10;
    }
}
/*int count=0;
while(a!=0)
{
    a=a/10;
    count++;
}
*/
