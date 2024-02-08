#include <stdio.h>
#include <stdlib.h>
#include"array_dynamic.h"
#include<assert.h>

int main(){

    array_dyn*test;

    test=initialize_dynamic_array(3);
    assert(test!=NULL);
    assert(test->c_size==0 && test->t_size==3);
    assert(test->arr!=NULL);

    assert(insert_data_dyn(test,10));
    assert(insert_data_dyn(test,11));
    assert(insert_data_dyn(test,12)==SUCCESS);

    assert(test->c_size==test->t_size);

    assert(insert_data_dyn(test,80)==ARRAY_FULL);

    assert(search(test,10));
    assert(search(test,12));
    assert(search(test,30)==NOT_FOUND);


    return 0;

}
