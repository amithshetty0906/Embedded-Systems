#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
#include"dyn_arr.h"
#include<assert.h>

int main()
{
    Array* test;
    test=initialize_data(5);

    assert(test->array!=NULL);
    assert(test->c_size==0);
    assert(test->t_size==5);


    assert(insert_data(test,10));
    assert(insert_data(test,20));
    assert(insert_data(test,30));
    assert(insert_data(test,40));
    assert(insert_data(test,50)==SUCCESS);

    assert(test->c_size==test->t_size);

    assert(insert_data(test,60)==FULL);

    assert(search(test,20));
    assert(search(test,30));
    assert(search(test,45));
    return 0;
}
