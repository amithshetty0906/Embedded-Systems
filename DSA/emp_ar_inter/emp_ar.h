#define _EMP_AR_H
#define FULL
#define success
#include<stdio.h>

typedef struct _EMP_AR_H{
 int emp_id;
 char emp_name[20];
 float emp_salary;
 }Employee;


typedef struct _arr_{
 Employee *arr;
 int c_size,t_size;
 }Array;


 Array* initialise_array();
 int insert_data(Array*,Employee);
 Employee search(Array*,char);

