#include<stdio.h>

struct student input();

struct student
{
    char name[50],roll[50];
    int age;
};

struct student input()
{
    struct student kid1;
    fflush(stdin);
    gets(kid1.name);
    fflush(stdin);
    gets(kid1.roll);
    fflush(stdin);
    scanf("\n%d",&kid1.age);
    fflush(stdin);
    return (kid1);
}

void display(struct student kid2)
{
   // struct student kid3=*kid2;
    printf("%s\t\t\t%s\t\t\t%d\t\t\t\n",kid2.name,kid2.roll,kid2.age);
  //  puts(kid2.name);
}

void main()
{
    int n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct student kid[n];
    printf("Now enter the student's name, rollno. and age\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i);
        kid[i]=input();
   // printf("%s %s %d",kid[i].name,kid[i].roll,kid[i].age);
    }
    printf("Student information\n\nNAME\t\t\tROLLNO.\t\t\tAGE\t\t\t\n\n");
    for(i=0;i<n;i++)
    {
        display(kid[i]);
    }
}
