#include<stdio.h>

//pass addresses to function
/*
int swap();
int main(){
    int a1=1, a2=2;

    swap(&a1,&a2);
    printf("a1=%d\n",a1);
    printf("a2=%d\n",a2);

    return 0;
}

int swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return temp;
}
*/

//passing pointers to functions
/*
int addOne();

int main(){
    int a=10;
    int *ptr = &a;
    addOne(ptr);

    printf("%d",*ptr);
    return 0;
}

int addOne(int *ptr){
    (*ptr)++;
}
*/

