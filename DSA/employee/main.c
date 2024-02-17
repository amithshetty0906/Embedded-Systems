#include <stdio.h>
#include <stdlib.h>
#include "assert.h"
#include "emp.h"

int main()
{
    List *test_list;
    test_list = initialise_emp_data();
    assert(test_list->count==0);

    assert(insert_data(test_list,"AMITH",111 ,10000));
    assert(test_list->head->emp_id);

    /*printf("%s\n",test_list->head->emp_name);
    printf("%d\n",test_list->head->emp_id);
    printf("%f\n",test_list->head->emp_salary);*/

    aseert(search_emp(test_list,111));

    return 0;



}
