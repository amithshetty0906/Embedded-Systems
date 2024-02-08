#include<stdlib.h>
#include<stdio.h>
#include"link_list.h"

List*initialise_list(){
    List*my_list;

    my_list=(List*)malloc(sizeof(List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;

    return my_list;
}

Node*getnode(int data){
    Node*new_node;

    new_node=(Node*)malloc(sizeof(Node));
    new_node->data=data;
    new_node->ptr=NULL;

    return new_node;

}

int insert_at_beg(List*my_list,int data){
    Node*new_node = getnode(data);
    if(new_node==NULL)
        return FAILED;

    if(my_list->count==0)
    new_node->ptr=my_list->head;
    my_list->head=new_node;
    my_list->count++;

    return SUCCESS;
}
