#include<stdio.h>
void main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("x = %d  p = %u  q = %u  r = %u\n",x,p,q,r);
    printf("*p = %d  &x = %u\n",*p,&x);
    printf("*&p = %u\n",*&p);
    printf("*q = %u  **q = %u\n",*q,**q);  // *q==p **q==x
    printf("*r = %u  **r = %u  ***r = %u",*r,**r,***r); // *r==q **r=p ***r==x
}

