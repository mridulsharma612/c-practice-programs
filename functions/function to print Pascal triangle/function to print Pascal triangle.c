#include<stdio.h>
long long int factorial(int);
int combi(int , int, int);

void pascal_print()
{
    int n,i,j,k,r;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        k=1;
        r=0;
        for(j=0;j<=2*(n)+2;j++)
        {
            if(j<=n+i && j>=n-i && k){

                printf("%4d",combi(i,r,i-r));
                r++;
                k=0;
            }
            else{

                printf("    ");
                k=1;
            }
        }
        printf("\n");
    }

}

long long int factorial(int fact)
{
    long long int fact_i,fact_k=1;
    for(fact_i=1;fact_i<=fact;fact_i++)
    {
       fact_k*=fact_i;
    }
    return (fact_k);
}

int combi(int combi_n, int combi_r, int combi_z)
{
    int combination;

    combination=factorial(combi_n)/(factorial(combi_z)*factorial(combi_r));
    return (combination);
}

void main()
{
        pascal_print();

}
