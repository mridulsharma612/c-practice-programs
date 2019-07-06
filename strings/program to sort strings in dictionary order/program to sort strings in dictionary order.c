#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,a,n;
    char temp[200];
    printf("Enter number of strings\n");
    scanf("%d",&n);
    char str[n][200];
    printf("Now enter %d strings\n",n);
    for(i=0;i<=n;i++)
    {
        gets(str[i]);
    }
    for(i=1;i<=n-1;i++)//round
    {
           // printf("\ni = %d\n",i);
        for(j=0;j<=n-i;j++)
        {
           // printf("\nj = %d\n",j);
            a=strcmp(str[j],str[j+1]);
            //printf("\na = %d\n",a);
            if(a>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    printf("After sorting order of the strings are");
    for(i=0;i<=n ;i++)
    {
        puts(str[i]);
    }
}
