#include<stdio.h>
void main()
{
    int a,i;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Factors: ");
    for(i=2;a!=1;i++)
    {

        while(a%i==0)
        {
            a/=i;
            printf("%d, ",i);
        }
    }
}
