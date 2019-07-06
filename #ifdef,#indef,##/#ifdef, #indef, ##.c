#include<stdio.h>
#define COUNTRY "INDIA"
//#define NATION
#define ALGEBRA(a,b) (a##b)+(a*b)  // ## concatenates whats before ## and whats after it


void main1();
#ifdef COUNTRY
void main()
{
    printf("Macro has been defined\n");
    printf("The ## definition ALGEBRA(3,4) = %d\n",ALGEBRA(3,4));
    main1();
}
#endif // COUNTRY

#ifndef NATION
void main1()
{
    printf("Macro is not defined\n");
}
#endif // NATION
