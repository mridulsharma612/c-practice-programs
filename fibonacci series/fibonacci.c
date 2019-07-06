#include<stdio.h>
void main()
{
    int N,a=0,x=0,i,b=1,c;
    printf("Enter number of terms\n");
    scanf("%d",&N);
    printf("Result: 0, ");
    for(i=2;i<=N;i++)
    {
        x=a+b;
        printf("%d, ",x);
        c=a;
        a=x;
        b=c;
    }
  }
/*
int a=-1,b=1,x;
for(i=1;i<=N;i++)
{
    x=a+b;
    print;
    a=b;
    b=x;

}
*/
