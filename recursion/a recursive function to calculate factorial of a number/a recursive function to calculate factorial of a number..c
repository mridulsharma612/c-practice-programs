#include <stdio.h>
int factorial(int);
int factorial(int a)
{
    int fact=1;
   if(a==1)
    return a;

   return (a*factorial(a-1));

}

void main()
{
    int n,k;
    printf("Enter the number for finding it's factorial\n");
    scanf("%d",&n);
    k= factorial(n);
    printf("Result: %d",k);
}
