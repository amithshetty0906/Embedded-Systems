#include<stdio.h>
#include<stdlib.h>
#include"link.h"



Node* get_Node(int data)
{
    Node* my_node;
    my_node=(Node*)malloc(sizeof(Node));
    my_node->data=data;
    my_node->ptr=NULL;
    return my_node;
}
Link_List *initialise_list()
{
    Link_List *my_list;
    my_list=(Link_List*)malloc(sizeof(Link_List));
    my_list->head=my_list->tail=NULL;
    my_list->count=0;
    return my_list;
}

int insert_at_beg(Link_List* my_list,int data)
{
    Node* new_node;
    new_node=get_Node(data);
    if(new_node==NULL)
        return FAIL;
    if(my_list->count==0)
    my_list->head=my_list->tail=new_node;
    else{
        new_node->ptr=my_list->head;
        my_list->head=new_node;
    }
    my_list->count++;
    return SUCCESS;

}

int insert_at_end(Link_List* my_list,int data)
{
    Node* new_node=get_Node(data);

    if(new_node==NULL)
        return FAIL;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else
    {
        my_list->tail->ptr=new_node;
        my_list->tail=new_node;
    }
    my_list->count++;
    return SUCCESS;
}
int insert_after_data(Link_List* my_list,int data,int element)
{
    Node* new_node;
    Node* temp;
    if(my_list->count==0)
        return FAIL;
    //if(my_list->count==1)
    if(my_list->tail->data==element)
        return insert_at_end(my_list,data);
    for(temp=my_list->head;temp!=NULL && temp->data!=element;temp=temp->ptr);

    if(temp==NULL)
        return FAIL;
    new_node=get_Node(data);

    new_node->ptr=temp->ptr;
    temp->ptr=new_node;

    my_list->count++;
    return SUCCESS;
}

int insert_at_pos(Link_List* my_list,int data,int pos)
{
    int i=1;
    Node* new_node=get_Node(data);
    Node* temp;
    if(new_node==NULL)
        return FAIL;
    if(my_list->count==0)
        my_list->head=my_list->tail=new_node;
    else
    {
        temp=my_list->head;
        while(i<pos-1)
        {
            temp=temp->ptr;
            i++;
        }
        new_node->ptr=temp->ptr;
        temp->ptr=new_node;

    }
    my_list->count++;
    return SUCCESS;


}


int search_list(Link_List* my_list,int element)
{
    Node* temp;
  for(temp=my_list->head;temp!=NULL;temp=temp->ptr){
      if(temp->data==element)
        return 1;
      }
      return 0;
}


int merge_list(Link_List*,Link_List*);
int split_list(Link_List*,int split_index);


int delete_at_beg(Link_List* my_list)
{
    Node* temp;
    if(my_list->count==0)
        return FAIL;

    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
    }

    else
    {
       temp=my_list->head;
       my_list->head=my_list->head->ptr;
       free(temp);
    }
    my_list->count--;
    return DELETE;
}


int delete_at_end(Link_List*  my_list)
{
    Node* temp;
    Node* prev;
    if(my_list->count==0)
        return FAIL;
    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
    }
    else
    {

        temp=my_list->head;
        while(temp->ptr!=NULL)
            {
            prev=temp;
            temp=temp->ptr;
            }
            free(temp);

            my_list->tail=prev;
            prev->ptr=NULL;

        my_list->count--;
        return SUCCESS;

    }
    my_list->count--;
    return SUCCESS;
}


int delete_after_element(Link_List* my_list,int element)
{
    if(my_list->count==0)
        return FAIL;
    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
    }
    if(element==my_list->tail->data)
        return delete_at_end(my_list);

    else
    {
        Node* temp;
        Node* next;
        temp=my_list->head;
        while(temp->data!=element)
            {
            temp=temp->ptr;

            }
            next=temp->ptr;


            temp->ptr=temp->ptr->ptr;
            free(next);
    }
    my_list->count--;
    return SUCCESS;
}


    /*delete at the position
    Node* temp;
    int i;
    if(my_list->count==0)
        return FAIL;
    if(my_list->count==1)
        {
        free(my_list->head);
    my_list->head=NULL;
    my_list->tail=NULL;
        }
    else
    {
        temp=my_list->head;
        while(i<pos)
        {
            temp=temp->ptr;
        }

    }*/

void print_list(Link_List* my_list)
{
    Node* temp;
    temp=my_list->head;
    while(temp->ptr!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->ptr;
    }
    printf("tail is %d\n",my_list->tail->data);
}

