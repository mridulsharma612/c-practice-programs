#include<stdio.h>
main()
{
    int x,y,z;
    double p=8;
    x= sizeof(34);
    y=sizeof(3.56);
    z=sizeof('a');

    printf("%d %d %d %d",x,y,z,sizeof (p));
}
