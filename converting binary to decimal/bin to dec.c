
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,z=0;
    long long int bin;
    double i=0;
    printf("Enter the binary number(upto 19 bits)\n");
    scanf("%lld",&bin);
    while(bin)
    {
        x=bin%10;
       // printf("x = %d\n",x);
        y=x*pow(2,i);
      //  printf("y = %d\n",y);
        bin/=10;
       // printf("bin = %d\n",bin);
        i++;
       // printf("i = %lf\n",i);
        z+=y;
       // printf("z = %d\n",z);

    }
    printf("Result: %d",z);
}
