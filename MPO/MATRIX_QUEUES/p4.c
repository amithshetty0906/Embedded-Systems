/*Implement a C function to find the transpose of a given 
matrix. The program should take a matrix as input, compute 
its transpose, and display the result.*/

#include<stdio.h>

void transpose(int mat[][100],int rows,int cols){
    int transmat[cols][rows];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transmat[j][i]=mat[i][j];
        }
    }

    printf("Transpose of matrix is\n");
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",transmat[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int mat[100][100];
    int rows,cols;

    printf("enter the number of rows and columns\n");
    scanf("%d %d",&rows,&cols);

    printf("enter the elements\n");
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("actual matrix is\n");
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    transpose(mat,rows,cols);
    return 0;
}