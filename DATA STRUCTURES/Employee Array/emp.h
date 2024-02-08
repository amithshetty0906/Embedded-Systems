#include<stdio.h>
#include<stdio.h>
#define SUCCESS
#define FAILED
#define FULL

typedef struct _emp_
{
    int emp_id;
    char emp_name[20];
    float emp_salary;
}Employee;

typedef struct _array_
{
    Employee *arr;
    int c_size,t_size;
}Array;

Array* initialise_array();
int insert_data(Array*,Employee);
void display(Array*);
Employee search(Array*,char*);
