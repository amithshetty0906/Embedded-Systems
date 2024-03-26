/*5. Define a global integer matrix of size 3 * 4. Let the main thread 
populate the matrix with integers from the user. Create 4 threads. 
Each thread computes the column sum of a particular column. The main
waits for the threads to complete their execution. Finally the main 
computes the total sum of integers from the partial results given out
by the threads, and outputs the sum to the screen. 
How will your program change if there are 3 threads, each computing 
the sum of a particulr row, and finally the main thread computes the
total sum?*/

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

#define rows 3
#define cols 4

int arr[rows][cols];

void *f1(void *ptr){
    int col = *((int *)ptr);
    int sum =0;
    for(int i=0;i<rows;i++){
        sum += arr[i][cols];
    }
    printf("Column %d sum: %d\n",cols+1,sum);
    pthread_exit(NULL);
}


int main() {
    printf("Enter %d x %d matrix elements:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("elements are\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
    }


    pthread_t threads[cols];
    int col_sums[cols];

    
    for (int i = 0; i < cols; i++) {
        pthread_create(&threads[i], NULL,f1, (void *)&i);
    }

   
    for (int i = 0; i < cols; i++) {
        pthread_join(threads[i], (void **)&col_sums[i]);
    }

    
    int total_sum = 0;
    for (int i = 0; i < cols; i++) {
        total_sum += col_sums[i];
    }

    printf("Total sum of matrix elements: %d\n", total_sum);

    return 0;
}

/*int main() {
    
    printf("Enter %d x %d matrix elements:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    pthread_t threads[ROWS];
    int row_sums[ROWS];

    for (int i = 0; i < ROWS; i++) {
        pthread_create(&threads[i], NULL, computeRowSum, (void *)&i);
    }

    
    for (int i = 0; i < ROWS; i++) {
        pthread_join(threads[i], (void **)&row_sums[i]);
    }

    int total_sum = 0;
    for (int i = 0; i < ROWS; i++) {
        total_sum += row_sums[i];
    }

    printf("Total sum of matrix elements: %d\n", total_sum);

    return 0;
}
*/


