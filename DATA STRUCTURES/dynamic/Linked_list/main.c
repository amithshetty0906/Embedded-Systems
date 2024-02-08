#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include"link.h"

int main()
{
    Link_List* test;
    test=initialise_list();
    assert(insert_at_beg(test,10));
    assert(insert_at_beg(test,20));
    assert(insert_at_beg(test,30));
    assert(insert_at_beg(test,40));
    assert(insert_at_beg(test,50));
    assert(insert_at_beg(test,60));
    assert(insert_at_beg(test,70));
    assert(insert_at_beg(test,80));

    assert(test->head->data==80);
    assert(test->tail->data==10);
    assert(test->count==8);

    assert(insert_at_end(test,90));
    assert(insert_at_end(test,100));
    assert(insert_at_end(test,110));
    assert(insert_at_end(test,120));
    assert(test->head->data==80);
    assert(test->tail->data==120);
    assert(test->count==12);

    assert(insert_after_data(test,220,90));
    assert(insert_after_data(test,300,120));
    assert(test->tail->data==300);
    assert(test->count==14);

    assert(search_list(test,300));

    assert(delete_at_beg(test));
    assert(test->head->data==70);

    assert(delete_at_end(test));
    assert(test->tail->data==120);
    //printf("%d",test->tail->data);

    print_list(test);

    assert(delete_after_element(test,100));
  //printf("\n%d",delete_after_element(test,70));
    //assert(test->count==11);

    assert(insert_at_pos(test,400,5));
    //assert(test->count==12);
    print_list(test);
    return 0;
}
