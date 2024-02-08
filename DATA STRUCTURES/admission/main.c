#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "admission.h"

int main()
{
    admit test_admission;
    student stud_details;


    test_admission = initialise();

    strcpy(stud_details.name,"Ram");
    stud_details.ranking=23;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Sita");
    stud_details.ranking=2;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);


    strcpy(stud_details.name,"Hanuman");
    stud_details.ranking=15;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Lakshman");
    stud_details.ranking=5;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Amith");
    stud_details.ranking=13;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);


    strcpy(stud_details.name,"Sagar");
    stud_details.ranking=4;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Dhanush");
    stud_details.ranking=3;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Mithun");
    stud_details.ranking=17;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Srivatsa");
    stud_details.ranking=17;
    stud_details.quotas=0;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Navaneeth");
    stud_details.ranking=18;
    stud_details.quotas=1;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Keerthan");
    stud_details.ranking=25;
    stud_details.quotas=1;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Shashank");
    stud_details.ranking=24;
    stud_details.quotas=1;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Prajwal");
    stud_details.ranking=11;
    stud_details.quotas=2;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Pawan");
    stud_details.ranking=19;
    stud_details.quotas=2;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);

    strcpy(stud_details.name,"Deepak");
    stud_details.ranking=20;
    stud_details.quotas=2;
    test_admission = inserting(test_admission, stud_details);
    assert(test_admission.insert_);


    //print admission details
    admitted(test_admission);

    return 0;
}
