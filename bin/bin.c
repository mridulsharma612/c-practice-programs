#include<stdio.h>
#include<conio.h>

#define SIZE 1000

void mat_multiply(int , int , int , int , int [SIZE][SIZE], int [SIZE][SIZE]);

void main(){

    int t, i, j;
    //printf("IMPOSSIBLE\n");
    fflush(stdin);
    scanf("%d", &t); //inputting testcases
    while(t--) //while testcases exist
    {
        int n1,m1; //input rows and columns of matrix 1
        scanf("%d %d", &m1,&n1);
        int arr1[SIZE][SIZE]; //declare the matrix 1
        for( i=0;i<m1;i++)
        for( j=0;j<n1;j++)
        scanf("%d" , &arr1[i][j]); //input the matrix 1
        
        int n2,m2; //input rows and columns of matrix 1
        scanf("%d %d", &m2,&n2);
        int arr2[SIZE][SIZE]; //declare the matrix 1
        for( i=0;i<m2;i++)
        for( j=0;j<n2;j++)
        scanf("%d" , &arr2[i][j]); //input the elements of matrix 2
        
        
        
    
    
    

        if(n1 != m2){
            printf("IMPOSSIBLE\n");
            continue;
        }

        mat_multiply(m1, n1, m2, n2, arr1, arr2);
        printf("\n");

    }


 
}



void mat_multiply(int m1, int n1, int m2, int n2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){

    int i,j,k;
    for(i=0; i<m1; i++){
        for(j=0; j<n2; j++){
            int prod = 0;
            for(k=0; k<n1; k++){
                prod += arr1[i][k]*arr2[k][j];
            }
            printf("%d ", prod);
        }
    }
    
}











