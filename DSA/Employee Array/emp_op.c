#include<stdio.h>
#include<stdlib.h>
#include"emp.h"

Array* initialise_array(int size)
{
    Array*my_emp;
    my_emp=(Array*)malloc(sizeof(Array));

    if(my_emp==NULL)
        return NULL;
    my_emp->c_size=0;
    my_emp->t_size=size;
    my_emp->arr=(Array*)malloc(sizeof(Array));

    return my_emp;
}

int insert_data(Array*my_emp,Employee data)
{
    if(my_emp->c_size==my_emp->t_size)
        return FULL;
    *(my_emp->arr+my_emp->c_size)=data;//array + current size = data
    my_emp->c_size++;
    return SUCCESS;
}

void display(Array*my_emp)
{
    int i;
    for(i=0;i<my_emp->c_size;i++)
    {
        printf("%d %f %s",(my_emp->arr+i)->emp_id,(my_emp->arr+i)->emp_name,(my_emp->arr+i)->emp_salary);
    }
}


Employee search(Array* my_emp,char*emp_name)
{
    int i;
    Employee temp;
    strcpy(temp.emp_name,"invalid");
    temp.emp_id=-1;

    for(i=0;i<my_emp->c_size;i++)
    {
        if(!strcmp((my_emp->arr+i)->emp_name,emp_name));
        return *(my_emp->arr+i);
        return temp;
    }
}
