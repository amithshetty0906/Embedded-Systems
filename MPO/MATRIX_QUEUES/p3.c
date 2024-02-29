/*(i) Write a C program to interchange any two rows of a 
matrix. The user should input the matrix, and the row 
numbers to be interchanged, and the program should display 
the modified matrix.
(ii) Make suitable modifications to your code so that you 
have function for the same.Write a suitable main() which 
invokes your function and observe your results.
*/

#include<stdio.h>

void interchange(int mat[][100],int rows,int cols,int row1,int row2){
    if(row1<0 || row1 >=rows || row2<0 || row2 >= rows){
        printf("invalid number of rows\n");
        return;
    }

    for(int j=0;j<cols;j++){
        int temp = mat[row1][j];
        mat[row1][j]=mat[row2][j];
        mat[row2][j]=temp;
    }
}


int main(){
    int rows,cols;

    printf("enter the rows and columns\n");
    scanf("%d %d",&rows,&cols);

    int mat[100][100];
    printf("enter the elements\n");
    for(int i=0;i<rows;i++){
       for( int j=0;j<rows;j++){
        scanf("%d",&mat[i][j]);
       }
    }

    printf("The actual matrix is:\n");
    for(int i=0;i<rows;i++){
       for( int j=0;j<rows;j++){
        printf("%d \t",mat[i][j]);
       }
       printf("\n");
    }

    int row1,row2;
    printf("enter the row numbers to interchange\n");
    scanf("%d %d",&row1,&row2);

    interchange(mat,rows,cols,row1,row2);

    printf("The interchnaged matrix is:\n");
    for(int i=0;i<rows;i++){
       for( int j=0;j<rows;j++){
        printf("%d \t",mat[i][j]);
       }
       printf("\n");
    }
}