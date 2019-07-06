#include<stdio.h>
#include<conio.h>
void main()
{
    int y,n;
    while(1){
    printf("Enter number of terms\n");
    scanf("%d",&n);
    y=sum(n);
    printf("Result: %d\n",y);
    getch();
    }
}

int sum(int n)
{

int s,x=0;
    for(s=1;s>0;s++)
    {

        x += s;
        if(s==n)
        {
            return(x);
        }
    }
}
// a simpler one is below

/*#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
*/

