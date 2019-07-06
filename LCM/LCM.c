#include<stdio.h>
void main()
{
    int a,b,l;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l+=(a>b?a:b))
    {
        if(l%a==0&&l%b==0)
        {
            printf("LCM: %d",l);
            break;
        }

}
}
