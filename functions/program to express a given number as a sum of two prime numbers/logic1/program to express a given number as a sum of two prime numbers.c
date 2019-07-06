#include<stdio.h>
#include<conio.h>
void sum_prime(void);
int prime_forward(int);
int prime_backward(int);
void sum_prime()
{
    int n,i,a,p1,p2,b=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Possible sum of  prime numbers:\n");


    for(i=2;i<=n-1;i++)
    {

        a=n;
        p1=prime_forward(i);
      // printf("i = %d               p1 = %d\n",i,p1);
        while(a>=2){

        p2=prime_backward(a);
      // printf("a = %d               p2 = %d\n",a,p2);
        if(p1+p2==n)
        {
            printf("%d | %d + %d = %d\n",b,p1,p2,n);
            b++;

        }
        a--;

        }


    }

}

int prime_forward(int forw_i)
{
    int i1;
    for(i1=2;i1<=forw_i-1;i1++)
    {
        if(forw_i%i1==0)
        {
            break;
        }
    }
    if(i1==forw_i)
    {
        return (i1);
    }
    else
        return(0);

}


int prime_backward(int back_i)
{
    int i2;
    for(i2=back_i-1;i2>=2;i2--)
    {
        if(back_i%i2==0)
        {
            break;
        }
    }
    if(i2==1)
    {
        return (back_i);
    }
    else
        return(0);

}

void main()
{
    sum_prime();
    getch();
}
