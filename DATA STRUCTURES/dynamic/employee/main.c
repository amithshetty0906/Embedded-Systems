#include <stdio.h>
#include <stdlib.h>
#include"employee.h"
#include<assert.h>
#include<string.h>

int main()
{
    Array *test;
    Employee data;

    test=initialise_data(5);
   assert(test!=NULL);
    assert(test->c_size==0&&test->t_size==5);

    data.emp_id=12;
    strcpy(data.emp_name,"Priya");
    data.emp_salary=109122345;
    assert(insert_info(test,data));

    data.emp_id=21;
    strcpy(data.emp_name,"Pinku");
    data.emp_salary=109122342;
    assert(insert_info(test,data));

    data.emp_id=5;
    strcpy(data.emp_name,"bhuvi");
    data.emp_salary=109122245;
    assert(insert_info(test,data));

    data.emp_id=13;
    strcpy(data.emp_name,"bhuvan");
    data.emp_salary=109122445;
    assert(insert_info(test,data));

    data.emp_id=11;
    strcpy(data.emp_name,"bhoona");
    data.emp_salary=109142345;
    assert(insert_info(test,data));

    display(test);

    data=search(test,"bhuvan");
    assert(data.emp_id==13);
    //assert(search(test,"mmm"));


    return 0;
}
