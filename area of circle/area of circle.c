#include<stdio.h>
main()
{
    float area, radius, diameter;
    int x;
    while(1)
    {
        printf("Select\n1.Radius\n2.Diameter\nto calculate area\n3.To exit\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("Enter radius\n");
            scanf("%f",&radius);
            printf("Area of circle is: %f\n",radius*radius*3.1416);
            break;
        case 2:
            printf("Enter diameter\n");
            scanf("%f",&diameter);
            printf("Area of circle is: %f\n",diameter*diameter*3.1416/4);
            break;
        case 3:exit(0);break;
        default:printf("Invalid entry\n");

        }
    }
}
