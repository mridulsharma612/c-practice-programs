#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k;
    char palin[100],palin1[100];
    char rev[100];
    printf("Enter a string to check whether it is a palindrome or not\n");
    scanf("%s",palin);
    strcpy(palin1,palin);
    strcpy(rev,strrev(palin));
   // printf("%s",rev);
    if(strcmp(palin1,rev)==0)
        printf("Yes, it is a palindrome");
    else
        printf("No, it is not a palindrome");

        // printf("\n%s\n%s\n%s",palin,palin1,rev);
}


