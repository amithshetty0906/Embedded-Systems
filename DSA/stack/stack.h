#include<stdio.h>
#include<stdlib.h>
#ifndef _STACK_
#define MAX_DEPTH 20

typedef struct _node_
{
    int data[MAX_DEPTH];
    struct _node_ *ptr;
}Node;

typedef struct _stack_
{
    int size;
    int top;

}Stack;

typedef struct _stack_result_
{
    int data;
    int status;
}Stackresult;

Stack initalise_stack(int size);



#endif // _STACK_
