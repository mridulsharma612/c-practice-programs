 
#include <stdio.h>


void main()
{
   unsigned long long i,j;
    for(i=0;i<1000000000;i++)
        for(j=i;j<1000000000;j++)
            if((i+j)==(i*j))
                printf("%lld %lld\n",i,j);

}