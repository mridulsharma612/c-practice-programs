#include"stdio.h"
#include"string.h"
#include"stdlib.h"
 typedef struct
 {
     char word[50];
 }WORD;
void reverse(WORD *, char *);
int word_count(char *);
void remove_space(char *);
int main(void)
 {
     char str[500];
     int no_of_words;
     WORD *ptr;
     printf("Enter the string\n");
     gets(str);
     remove_space(str);
     //puts(str);
     no_of_words = word_count(str);
     //printf("%d\n",no_of_words);
     ptr =calloc(no_of_words,sizeof (WORD));
     reverse(ptr,str);
     printf("The reversed string is\n");
     puts(str);
     return 0;
 }
void reverse(WORD *ptr, char *s)
{
    char *q,temp[50];
    int i=0,j,k=0,l;
    while(*(s+i))
    {
   // puts(s);
        j=0;
        while((*(s + i) != ' ') & (*(s+i) != '\0'))
        {
            temp[j] = *(s+i);
            i++;
            j++;
        }
        if(*(s+i) == ' ')
        {
            i++;
        }
            temp[j] = '\0';
            strcpy(ptr[k].word,temp);
            k++;
    }
        q = malloc(strlen(s)+1);
        for(l=0;*(q+l);l++)
            *(q+l)='\0';
        k--;
        while(k)
        {
                strcat(q,ptr[k].word);
                strcat(q," ");
                k--;
        }
        strcat(q,ptr[0].word);
        strcpy(s,q);

}
 int word_count(char *p)                    // Counts the spaces
{                                           // no. space +1 = no. of words
    int i,k=0;
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
