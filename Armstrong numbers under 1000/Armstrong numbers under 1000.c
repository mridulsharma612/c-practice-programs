#include<stdio.h>
#include<math.h>
void main()
{
    int a,s=0,x,y;
    int r, count=0;
   for(a=0;a<=1000;a++){
        //scanf("%d",&a);
        s=0;
        x=a;
        y=a;
        count=0;
        while(x){
        x/=10;
        count++;
        }
      while(y)
      {
          r=y%10;
          s+=pow(r, count)+0.5;
          y/=10;
      }
        if(a==s)
        {
            printf("%d\n",s);
        }

    }


}
