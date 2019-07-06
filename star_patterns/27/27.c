/*

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16
22*23*24*25*26*27*28
36*35*34*33*32*31*30*29
37*38*39*40*41*42*43*44*45

*/


#include<stdio.h>
void main()
{
    int n,i,j,k=0,a;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0){
            k--;
            k+=i;
        }
        else
            k+=1;
        a=k;
        for(j=1;j<=2*n-1;j++)
        {

            if(j<=(2*i-1)){

               if(j%2!=0){
                printf("%d",a);
                if(i%2==0)
                    a--;
                else{

                    a++;
                    k++;
                }
               }

            else
                printf("*");
               }

        }
        printf("\n");



    }
}

