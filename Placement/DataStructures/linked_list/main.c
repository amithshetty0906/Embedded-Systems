#include <stdio.h>
#include <stdlib.h>
#include"link_list.h"
#include<assert.h>

int main()
{
    List*test_list;

    test_list=initialise_list();
    assert(test_list->head==NULL && test_list->tail==NULL);
    assert(test_list->count==0);

    assert(insert_at_beg(test_list,20));

    assert(test_list->head==test_list->tail);
    assert(test_list->count==1);

    assert(insert_at_beg(test_list,30));
    assert(insert_at_beg(test_list,40));

    assert(test_list->count==3);
    assert(test_list->head->data==40);
    assert(test_list->tail->data==20);
    assert(test_list->tail->ptr->ptr->ptr->ptr->data==30);
}
