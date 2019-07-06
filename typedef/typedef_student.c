#include<stdio.h>

typedef struct
{
    char roll[20],name[20];
    int age;
}STUDENT;

void main()
{
    STUDENT s1;
    printf("Enter roll no., name and age\n");
    gets(s1.roll);
    fflush;
    gets(s1.name);
    fflush;
    scanf("%d",&s1.age);
    puts(s1.name);
    printf("Age = %d\nRoll No.= ",s1.age);
    puts(s1.roll);
}
