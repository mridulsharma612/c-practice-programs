#include<stdio.h>
#include<string.h>
int indexOfString(char mains[],char sub[])
{
    int l,i,j,k;
    l=strlen(sub);
    for(i=0;mains[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(mains[k]!=sub[j])
                break;
            k++;
        }
        if(j==l)
        return(i);
    }
    return(-1);
}

void main()
{
    char mains[200],sub[200];
    printf("Enter a string\n");
    gets(mains);
    printf("Now enter the substring to find its index\n");
    gets(sub);
    printf("Index of the substring ''%s'' in string ''%s'' is %d",sub,mains,indexOfString(mains,sub));

}
