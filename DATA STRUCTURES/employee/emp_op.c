#include<stdio.h>
#include<stdlib.h>
#include "emp.h"

emp *initialise(int size)
{
    emp *my_emp;

    my_emp=(emp*)malloc(sizeof(emp));
    my_emp->c_size=0;
    my_emp->t_size=size;
    my_emp->arr=(employee*)malloc(sizeof(employee)*size);

    return my_emp;
}

int insert_emp_data(emp *my_emp,employee data)
{
    if(my_emp->c_size==my_emp->t_size)
    return 0;
    *(my_emp->arr + my_emp->c_size)= data;
    my_emp->c_size++;

    return 1;
}
