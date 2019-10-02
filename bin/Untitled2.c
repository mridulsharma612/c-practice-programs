#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test,i;
    scanf("%d",&test);
    long long int arr[test],num;
    for(i=0;i<test;i++)
    {
        scanf("%lld",&num);
        arr[i] = num*2 + num*3 + num*6;
    }
    for(i = 0;i<test;i++)
    {
        printf("%lld\n",arr[i]);
    }
    return 0;
}
