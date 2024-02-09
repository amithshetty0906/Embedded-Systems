#include<stdio.h>

//realtion between array and pointers
/*
int main(){
    int x[4];
    int i;

    for(i=0;i<4;i++){
        printf("&x[%d] = %p\n",i,&x[i]);
    }
    printf("address of array x is: %p",x);
    return 0;
}
*/

//pointers and arrays ex1
/*
int main(){
    int i,x[6],sum=0;

    printf("enter 6 numbers\n");

    for(i=0;i<6;i++){
        scanf("%d\n",&x[i]);

        sum += *(x+i);
    }
    printf("Sum = %d",sum);
    return 0;
}
*/




//pointers and arrays  ex2
/*
int main(){
    int x[5]={1,2,3,4,5};
    int *ptr = &x[2];

    printf("*ptr = %d\n",*ptr);
    printf("*(ptr+1) = %d\n",*(ptr+1));
    printf("*(ptr-1) = %d\n",*(ptr-1));

    return 0;
}
*/
