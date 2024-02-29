/*(i) Write a C program to sort the elements of a matrix. 
The program should take a matrix as input and display the 
sorted matrix.
(ii) Modify your code so that you convert the code into a 
function called sort(). Signature of matrix_sort() can be 
as below:
 int sort(int mat[][], int rows, int cols). 
Let the return value of sort() be zero always.
Write a suitable main() which invokes sort() and observe 
your results.*/

#include<stdio.h>

void sort(int mat[][10],int rows,int cols){
    int temp[rows*cols];
    int k=0;

    for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                temp[k++]=mat[i][j];
            }
    }

    for(int i=0;i<rows*cols-1;i++){
        for(int j=0;j<rows*cols-i-1;j++){
            if(temp[j]>temp[j+1]){
                int t=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=t;
            }
        }
    }

    k=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            mat[i][j]=temp[k++];
        }
    }
}


int main(){
    int rows,cols;
    printf("enter the number of rows and columns\n");
    scanf("%d  %d",&rows,&cols);

    int mat[rows][cols];

    printf("enter the elements of the matrix\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    sort(mat,rows,cols);

    printf("sorted matrix is: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}