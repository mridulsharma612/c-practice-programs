#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int);
void main()
{
    int x,a,y,k,b,q;
    double count;
    printf("Enter a number\n");
    scanf("%d",&a);
     q=sum(a);
    y=a;
    while(y!=0)
{
    y=y/10;
    count++;
}
//  printf("count= %lf\n",count);
    count = count-1;
//  printf("count* = %lf\n",count);
    if (count==2)
    {
        b=pow(10,count)+0.5;
    }
    else
    {
    b=pow(10, count);
    }
    //printf("b= %d\n",b);
    for(k=0;b>=1;b/=10)
    {
        x=a/b;
      //  printf("x= %d\n",x);
        a=a%b;
        //printf("a = %d\n",a);
        k+=x;
        //printf("k = %d\n",k);
    }

            printf("Sum of digits: %d\n",k);


        printf("The sum function : %d",q);
    }


int sum(int a)
{
    int r,s;
    for(s=0;a>=1;a/=10)
    {
        r=a%10;
        s+=r;
}
return(s);
}

