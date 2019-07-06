#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int k,n;
    while(1)
{


    printf("Enter the number of terms\n");
    scanf("%d",&n);
    k= sum(n);
    printf("Result: %d\n",k);
    getch();

}
}

int sum(int a)
{
    int s;
    if(a==1)
        return(a);
    s=a+sum(a-1);
    return(s);
}


