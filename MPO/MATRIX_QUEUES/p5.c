/*Implement a C program to multiply two integer matrices. 
The program should take two matrices as input from the user
and display the result. If the two matrices are not 
compatible for multiplication, output an adequate message 
to the user.*/

#include<stdio.h>
#define SIZE 10

void matrixmul(int mat[][SIZE],int mat1[][SIZE],int mat2[][SIZE],int result[][SIZE],int row,int col,int row1,int col1,int row2,int col2){
    if(col1 != row2){
        printf("Multiplication not possible");
        return;
    }
    for(int i=0;;i<row1;i++){
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col1;k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matrix after multiplication is\n");
    for(int i=0;;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}



int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    int row1, col1, row2, col2;

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Result of multiplication:\n");
    matrixmul(mat,row,col,mat1, mat2, result, row1, col1, row2, col2);

    return 0;

}