#include<stdio.h>
enum boolean
{
    false,true
};

enum boolean even_odd(int x)
{
    if(x%2==0)
        return(true);
    else
        return(false);
}

void main()
{
    int a;
    enum boolean result;
    printf("Enter a number to check a number is even or odd\n");
    scanf("%d",&a);
    result = even_odd(a);
    if(result==true)
        printf("The number is even");
    else
        printf("The number is odd");


}
