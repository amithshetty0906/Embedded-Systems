#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

Stack initalise_stack(int size)
{
    //size=(size > 0 && size < MAX_DEPTH?size:MAX_DEPTH;
    Stack *my_stack;
    my_stack = (Stack*)malloc(sizeof(Stack));
    my_stack->top=NULL;
    my_stack->size=0;

    return my_stack;
}
