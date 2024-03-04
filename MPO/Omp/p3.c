/*Create a parallel program to calculate the factorial of a 
number using OpenMP. Use a shared variable for the result, 
and private variables for loop indices.
*/

#include<stdio.h>
#include<omp.h>

int main(){
    int n;
    printf("enter a number to find factorial\n");
    scanf("%d",&n);
    int factorial =1;

    #pragma omp paralle for reduction(*factorial)
    for(int i=2;i<=n;i++){
        factorial *=i;
    }

    printf("factorial of %d is: %d\n",n,factorial);
    return 0;
}