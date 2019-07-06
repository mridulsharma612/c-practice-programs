#include<stdio.h>
void main()
{
    int a,b,l,x;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a&&l<=b;l++) //we can put limit to smaller number
                            // reversing the loop will give greater speed and efficiency
                            //for(l=a<b?a:b;l>=1;l--)
    {
        if(a%l==0&&b%l==0)
        {
            x=l;
        }
    }
    printf("HCF: %d",x);
}
