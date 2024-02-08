#include<stdio.h>

//finding addres of variable
/*int main(){
    int c=10;
    printf("%d\n",c);
    printf("address of c is %p ",&c);
}
*/

//pointers are declared by int *p;


//how to get value of thing pointed by pointers
/*
int main(){
    int *pc,c;
    c=5;
    pc=&c;
    printf("%d",*pc);
}
*/


//changing value pointed by pointers ex1
/*
int main(){
    int *pc,c;
    c=5;
    pc=&c;
    c=1;
    printf("%d\n",c);
    printf("%d",*pc);

}
*/


//changing vale pointed by pointers ex2
/*
int main(){
    int *pc,c,d;
    c=5;
    d=-5;
    pc=&c;
    printf("%d\n",*pc);
    pc=&d;
    printf("%d\n",*pc);
}
*/


//overall example
/*
int main(){
    int *pc,c;
    printf("if value of c is 22\n");
    c=22;
    printf("address of c is %p\n",&c);
    pc=&c;
    printf("value stored in p is %d\n",*pc);
    printf("if value of *pc=11\n");
    *pc=11;
    printf("address of c is %p\n",&c);
    printf("value of c is %d",c);
}
*/
/*
int main(){
    int c;
    int *pc=&c;
    printf("if value of c is 22\n");
    c=22;
    printf("address of c is %p\n",&c);
    pc=&c;
    printf("value stored in p is %d\n",*pc);
    printf("if value of *pc=11\n");
    *pc=11;
    printf("address of c is %p\n",&c);
    printf("value of c is %d",c);
}
*/


/*
int main(){
    int c;
    printf("enter value of c \n");
    scanf(" %d\n",&c);
    int *ptr = &c;
    printf("address of c is %p\n",&c);
    printf("value stored in c is %d\n",*ptr);
    *ptr=4;
    printf("address of c is %p\n",&c);
    printf("value stored in c is %d",*ptr);

}
*/
/*
int main(){

    int a=10,b=9;
    int *p,*q;
    int c;
    p=&a;
    q=&b;

    printf("a = %d and b = %d\n",a,b);
    printf("address of a is %p\n",&a);
    printf("address of a is %p\n",p);
    printf("address of p is %p\n",&p);

    *p=20;
    c=*q;
    *q=400;
    printf("a = %d\n",a);
    printf("c = %d\n",c);
    printf("b = %d\n",b);
    printf("p is%p ",p);

}
*/

//pointer assignment
int main(){
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;
    printf("a=%d %d",*q,*p);
}





















