
//      \*******/
//      *\*****/*
//      **\***/**
//      ***\*/***
//      ****\****
//      ***/*\***
//      **/***\**
//      */*****\*
//      /*******\


#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i)
                printf("\\");
            else if(j==n+1-i)
                printf("/");
            else
                printf("*");
        }
        printf("\n");
    }
}
