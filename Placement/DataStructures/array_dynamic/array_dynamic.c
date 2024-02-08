#include<stdio.h>
#include<stdlib.h>
#include"array_dynamic.h"


array_dyn*initialize_dynamic_array(int size){
    array_dyn*my_array;
    my_array=(array_dyn*)malloc(sizeof(array_dyn));

    if(my_array==NULL){
        return NULL;
    }
        my_array->c_size=0;
        my_array->t_size=size;
        my_array->arr=(int*)malloc(sizeof(int)*size);

        return my_array;
}

int insert_data_dyn(array_dyn*my_array,int data){
    if(my_array->c_size==my_array->t_size)
        return ARRAY_FULL;

    *(my_array->arr + my_array->c_size)=data;
    my_array->c_size++;

    return SUCCESS;

}

int search(array_dyn*my_array,int element){
    int i;
    for(i=0;i<my_array->c_size;i++)
        if(*(my_array->arr+i)==element){
            return FOUND;
        }
            return NOT_FOUND;
}
















