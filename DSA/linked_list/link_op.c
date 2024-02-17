#include<stdlib.h>
#include"link.h"

List * initialise_list();
{
    List *my_list;

    my_list = (List*)malloc(sizeof(List));
    my_list->head = my_list->tail = NULL;//sets heads and tail of new pointer of new allocated list to NULL
    my_list->count =0;//keeps track of elements in list

    return my_list;//returns initialised list
}

Node *get_node(int data)
 {
    Node *new_node;

    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;//data member of new node is set to data parameter
    new_node->ptr = NULL;//pointer member of new node is set to NULL

    return new_node;//returns new created node structure
}

///////////////////////////////////

int insert_at_beg(List *my_list,int data)
{
    Node *new_node = get_node(data);//creates new node using get node function,get node dynamically allocates memory for new node and initialises data
    if(new_node == NULL)//if new new node is NULL memory aloc failed
        return FAILED;//so return failed
    if(my_list->count ==0) //if list is empty ,has zero nodes
        my_list->head = my_list->tail = new_node;//then new node becomes head and tail of list
    else{
        new_node->ptr = my_list->head;
        my_list->head = new_node
    }
    my_list->count++;
    return INSERT_SUCCESS;


}

////////////////////////////////////


int insert_at_end(List *my_list,int data)
{
    Node *new_node = get_node(data);
    if(new_node == NULL)
        return FAILED;
    if(my_list->count==0)
    my_list->head=my_list->tail=new_node;
    else{
        my_list->tail->ptr = new_node;
        my_list->tail=new_node;
    }
    my_list->count++;
    return INSERT SUCCESS;
}

int insert_after_data(List *my_list,int data,int element)
{
    Node *new_node,*temp;
    if(my_list->count==0)
        return FAILED;
    if(my_list->tail->data==element)
        return insert_at_end(my_list,data);
    for(temp=my_list->head;temp!=NULL && temp->data!= element;temp=temp->ptr);
    if (temp==NULL)
        return FAILED;
    new_node=get_node(data);

    new_node->ptr=temp->ptr;
    temp->ptr=new_node;

    my_list->count++;
    return INSERT_SUCESS;
}

///////////////////////////////////////////////////
int insert_at_pos(List*my_list,int data,int pos);


//////////////////////////////////////////

int search_list(List *my_list,int element)
{
    Node*temp;
    for(temp=my_list->head;temp!=NULL;temp=temp->ptr)
        if(temp->data==element)
        return 0;
}
///////////////////////////////////////////////////
int delete_at_beg(List *my_list)
{
    Node*temp;
    if(my_list->count==0)
        return 0;

    if(my_list->count==1){
        free(my_list->head);
        my_list->head=NULL;
        my_list->tail=NULL;
    }
    else{
        temp=my_list->head;
        my_list->head=my_list->head->ptr;
        free(temp);
    }

    my_list->count--;
    return DELETED;

}

/////////////////////////////////////////

int delete_at_end(List *my_list)
{
    Node*temp;
    if(my_list->count==0)
        return 0;
    if(my_list->count==1){
            free(my_list->n-1);
            my_list->head=NULL;
            my_list->tail=NUll;

    }
    else{
        temp=my_list->tail;
        my_list->tail=my_list->tail->ptr;
        free(temp);
    }
    my_list->count --;
    return DELETED;
}


//////////////////////////////////////////////////////

int delete_element(List *my_list,int element)
{
    if(my_list->count==0)
        return 0;
    if(my_list->count==1){
        my_list->head=element;
        if(element ==0)
    }
}
















