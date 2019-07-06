#include<stdio.h>
main()
{
    while(1){
    int a,b;
    printf("enter two number\n");
    scanf("%d %d",&a, &b);
    printf("bitwise AND operator %d&%d = %d\n",a,b,a&b);// turns number into binary then
                                    //AND operation is performed on every bit
    printf("bitwise OR operator %d|%d = %d\n",a,b,a|b);// OR operation on every bit
    printf("bitwise XOR operator %d^%d = %d\n",a,b,a^b);//XOR operation on every bit
    printf("bitwise Right Shift by 2 %d>>2 = %d\n",b,b>>2);//shifts binary digits to right side by entering no. of zero
                                                            //equal to later operand at the beginning of binary no.

    printf("bitwise Left Shift by 2 %d<<2 = %d\n",b,b<<2);//just like right shift but in opposite direction
    printf("bitwise NOT operator of ~%d = %d\n",b,~b);// for theory refer to notes
    getch();
    }
}

