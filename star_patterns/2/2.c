/*
       *
      **
     ***
    ****
   *****
  ******
 *******
********
*/

#include<stdio.h>
void main()
{
    int n , i,j,z;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    z=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<z)
                printf(" ");
            else
                printf("*");

        }
            z--;
        printf("\n");

    }
}
