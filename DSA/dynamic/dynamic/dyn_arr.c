#include<stdio.h>
#include<stdlib.h>
#include"dyn_arr.h"

Array* initialize_data(int size)
{
    Array *my_arr;
    my_arr=(Array*)malloc(sizeof(Array));
    if(my_arr==NULL) return NULL;
    my_arr->c_size=0;
    my_arr->t_size=size;

    my_arr->array=(int*)malloc(sizeof(int)*size);

    return my_arr;
}

int insert_data(Array* my_arr,int data)
{
    if(my_arr->c_size==my_arr->t_size)
        return FULL;
    *(my_arr->array + my_arr->c_size)=data;
    my_arr->c_size++;
    return SUCCESS;
}

int search(Array* my_arr,int data)
{
    int i;
    for(i=0;i<my_arr->c_size;i++)
    {
        if(*(my_arr->array+i)==data)
            return FOUND;

    }
    return NOT_FOUND;
}
