#include<stdio.h>
void natural(int n)
{
    if(n>=1)
    {
        natural(n-1);
        printf("%d, ",n);
    }
}

void main()
{
    int a;
    printf("Enter the number of terms\n");
    scanf("%d",&a);
    natural(a);

}
