#include<stdio.h>
#include<string.h>
int word_count(char *p);
void remove_space (char  *p);
void main()
{

    char sent[500];
    printf("Enter a sentence\n");
    gets(sent);
    printf("There are %d words in the sentence\n",word_count(sent));
    puts(sent);
}

int word_count(char *p)                    // Counts the spaces
{                                           // no. space +1 = no. of words
    int i,j,k=0,l;
      remove_space(p);

      if(*(p + strlen(p)-1) == ' ')
        k--;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)==' ')
            k++;
           }
    return(k+1);
}


void remove_space(char *p)
{
    int i,j;
    //printf("%s",*p);              // Removes extra spaces
    for(i=0;*(p+i);i++)
    {
        if((*(p+i)== ' ' && *(p+i+1) == ' ') || *p==' ')
        {
            for(j=i;*(p+j);j++)
                *(p+j)=*(p+j+1);
            i--;
        }
    }
    //return (p);
}
