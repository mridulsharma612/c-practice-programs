#include<stdio.h>
#include<string.h>
void main()
{
    int m,i,j,k,l=0;
    char main[200],sub[200];
    printf("Enter a string\n");
    gets(main);
    printf("Now enter the substring to find its index on the main string\n");
    gets(sub);
    m =strlen(sub);
    for(i=0;main[i];i++)
    {
        k=0;
        l=0;
        for(j=i ;main[j] != ' ';j++)
        {
            if(main[j] != sub[k]){
                break;
            }
            else if(main[j] == sub[k]){
                l++;
     //       printf("l=%d  m=%d",l,m);
            }
            if(l==m){
   // printf("strlen = %d\n",strlen(sub));
                printf("The index of ''%s'' in ''%s'' is %d\n",sub,main,i);
                break;
            }
            k++;
        }
    }
}
