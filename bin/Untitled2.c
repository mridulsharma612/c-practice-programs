main ()
{
    char a[10];
    int i,num;
    printf("enter  string");
    gets(a);
    for(i=0;a[i];i++);
    num=i;
    reverse(a,num);

}
void reverse(char *p,int num)
{
    char b[10];
    int i,j;
    for(i=0;i<=num-1;i++)
        b[i]=*(p+i);
    for(i=0,j=num-1;i<=num-1;i++,j--)
        *(p+j)=b[i];
    for(i=0;i<=num-1;i++)
        printf("%c",*(p+i));
}
