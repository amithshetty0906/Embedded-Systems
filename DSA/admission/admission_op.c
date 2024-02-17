#include "admission.h"
#include<stdio.h>

admit initialise()
{
    admit temp;

    temp.insert_=0;
    temp.c_size[0]=0;  temp.t_size[0]=30;//merit seat within rank 30
    temp.c_size[1]=30; temp.t_size[1]=40;//management seat within rank 40
    temp.c_size[2]=40; temp.t_size[2]=50;//nri seat within rank 50

    return temp;
}

//sort admission based on ranking
admit sorting(admit admission_list)
{
    int i, j,n;
    student key;
    n = admission_list.c_size[0];
    for (i = 1; i < n; i++)
    {
        key = admission_list.applied[i];
        j = i - 1;

        while (j >= 0 && admission_list.applied[j].ranking > key.ranking) {
            admission_list.applied[j + 1] = admission_list.applied[j];
            j = j - 1;
        }
        admission_list.applied[j + 1] = key;
    }

    return admission_list;
}

//inserting student details
admit inserting(admit temp, student stud)
{
    switch(stud.quotas)
    {
        case 0:
            if(temp.c_size[0]<=temp.t_size[0])
                {
                    temp.applied[temp.c_size[0]++]=stud;
                    temp.insert_ = 1;
                    temp = sorting(temp);
                    return temp;
                }
            else
            {

                temp.insert_ = 0;
                return temp;
            }

        case 1:
            if(temp.c_size[1]<=temp.t_size[1])
                {
                    temp.applied[temp.c_size[1]++]=stud;
                    temp.insert_ = 1;
                    return temp;
                }
            else
            {

                temp.insert_ = 0;
                return temp;
            }

        case 2:
            if(temp.c_size[2]<=temp.t_size[2])
                {
                    temp.applied[temp.c_size[2]++]=stud;
                    temp.insert_ = 1;
                    return temp;
                }
            else
            {
                temp.insert_ = 0;
                return temp;
            }

    }

}

//print name,rank and Quota based on ranking
void admitted(admit applied_stud)
{
    int i=0;
    for(i=0; i<6; i++)
       printf("Name:%s -- Rank:%d -- Quota:%s\n",applied_stud.applied[i].name,applied_stud.applied[i].ranking,quotas(applied_stud.applied[i].quotas));

    for(i=30; i<32; i++)
       printf("Name:%s -- Rank:%d -- Quota:%s\n",applied_stud.applied[i].name,applied_stud.applied[i].ranking,quotas(applied_stud.applied[i].quotas));

    for(i=40; i<42; i++)
       printf("Name:%s -- Rank:%d -- Quota:%s\n",applied_stud.applied[i].name,applied_stud.applied[i].ranking,quotas(applied_stud.applied[i].quotas));


}


//definition of quotas
char* quotas(int num)
{
    switch(num)
    {
            case 0: return "Merit Quota";
            case 1: return "Management Quota";
            case 2: return "NRI Quota";

    }
}
