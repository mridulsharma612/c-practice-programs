#include<stdio.h>
#include<conio.h>
int check_prime(int);
int next_prime(int);
void main()
{
    int x,i;
    printf("Enter a number\n");
    scanf("%d",&x);
    for(i=2;i<=(x-i);i=next_prime(i))
    {
        if(check_prime(x-i))
            printf("%d + %d = %d\n",i,x-i,x);
    }
    getch();
}


int next_prime(int n)
{
    do
        n++;
    while(!check_prime(n));
    return(n);
}

int check_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
