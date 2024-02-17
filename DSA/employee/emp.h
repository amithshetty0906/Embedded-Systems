#include<stdio.h>
#include<stdlib.h>
typedef struct _employee_
{
 char emp_name[10];
 int emp_id;
 float emp_salary;

 struct _employee_ *ptr
}Employee;

typedef struct _list_
{
    Employee *head,*tail;
    int count;

}List;

List *initialise_emp_data();
int insert_data(List*,char * ,int,float );
int search_emp(List *,int );

