#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    float x1,x2,x3,a,b,c;
    long double D; //declaration of sqrt variable
    while(1){
    printf("Enter the values of a,b and c of quadratic equation ax^2+bx+c\n");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D<0)
    {
        printf("Imaginary roots\n");

    }
    else if(D==0)
    {

        x1=(-b)/(2.0*a);
        printf("Both roots are %d\n",x1);
    }
    else
    {

        x2=((-b)+sqrt(D))/(2*a);
        x3=((-b)-sqrt(D))/(2*a);
        printf("Roots are %f and %f\n",x2,x3);

    }
     getch();
}
}
