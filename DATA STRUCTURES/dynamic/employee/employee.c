#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"employee.h"


Array* initialise_data(int size)
{
    Array* my_emp;
    my_emp=(Array*)malloc(sizeof(Array));
    if(my_emp==NULL) return NULL;
    my_emp->c_size=0;
    my_emp->t_size=size;
    my_emp->emp=(Employee*)malloc(sizeof(Employee)*size);
    return my_emp;
}

int insert_info(Array* my_emp,Employee data)
{
    if(my_emp->c_size==my_emp->t_size)
        return FULL;
    *(my_emp->emp+my_emp->c_size)=data;
    my_emp->c_size++;
    return SUCCESS;
}

void display(Array* my_emp)
{
    int i;
    for(i=0;i<my_emp->c_size;i++)
    {
        printf("\n%d %s %f",(my_emp->emp+i)->emp_id,(my_emp->emp+i)->emp_name,(my_emp->emp+i)->emp_salary);
    }
}

Employee search(Array* my_emp,char *emp_name)
{
    int i;
    Employee temp;
    strcpy(temp.emp_name,"invalid");
    temp.emp_id=-1;

    for(i=0;i<my_emp->c_size;i++)
        if(!strcmp((my_emp->emp+i)->emp_name,emp_name))
           return *(my_emp->emp+i);
    return temp;
}
