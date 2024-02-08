#include <string.h>
#include <stdlib.h>
#include<assert.h>
#include "emp.h"

int main()
{
    emp *test;
   // Employee data;

    test = initialise(10);
    assert(test->c_size == 0 && test->t_size == 10);

    data.emp_id =1001;
    strcpy(data.emp_name,"Ram");
    data.emp_salary =10000;
    assert(insert_emp_data(test,employee data));

    return 0;
}
