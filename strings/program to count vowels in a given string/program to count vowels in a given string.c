#include<stdio.h>
void main()
{
    char str[200],vow[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=0;vow[j];j++)
        {
            if(str[i]==vow[j])
            {
                count++;
                break;
            }
        }
    }
    printf("There are %d vowels in the entered string",count);
}
