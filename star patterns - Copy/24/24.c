/*

                     0
                   1 2 1
                 2 3 4 3 2
               3 4 5 6 5 4 3
             4 5 6 7 8 7 6 5 4
           5 6 7 8 9 0 9 8 7 6 5
         6 7 8 9 0 1 2 1 0 9 8 7 6
       7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
     8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
   9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
 0 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 0
   9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
     8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
       7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
         6 7 8 9 0 1 2 1 0 9 8 7 6
           5 6 7 8 9 0 9 8 7 6 5
             4 5 6 7 8 7 6 5 4
               3 4 5 6 5 4 3
                 2 3 4 3 2
                   1 2 1
                     0

*/


#include<stdio.h>
void main()
{
    int n,i,j,k=0,a;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i<=(n+1)/2?k:k-2;
        i<=(n+1)/2?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(j>=(n+1)/2 +1-k && j<=(n+1)/2 -1 +k){
                printf(" %d",a%10);
                j<(n+1)/2?a++:a--;


            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
