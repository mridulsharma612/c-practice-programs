#include<stdio.h>
void main()
{
    int a,r,s=0;
    printf("Enter a number\n");
    scanf("%d",&a);
      while(a){
        r = a%10;
        s+=(r*r*r);
        a/=10;
        }
        printf("Result: %d",s);
}
