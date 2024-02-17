#include "emp.h"



List *initialise_emp_data()
{
    List *my_list;
    my_list=(List*)malloc(sizeof(List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;

    return my_list;

}

int insert_data(List *list,char name[],int emp_id ,float emp_salary)
{
  Employee *new_node;
  new_node=(Employee*)malloc(sizeof(Employee));
  new_node->emp_id=emp_id;

  new_node->emp_salary=emp_salary;

  strcpy(new_node->emp_name,name);
  new_node->ptr=NULL;

    if(list->count==0)
    {
        list->head=list->tail=new_node;
        list->count++;
        return 1;
    }
    else
    {
        new_node->ptr=list->head;
        list->head=new_node;
        list->count++;
        return 1;
    }
}


int search_emp(List *list,int element)
{
    Employee *temp;
    for(temp=list->head;temp!=NULL;temp->ptr)
        if(temp->emp_id=element)
        return 1;
    else
        return 0;
}


