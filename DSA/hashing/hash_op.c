#include<stdio.h>
#include<stdlib.h>
//#include"hasht.h"
#include<string.h>
#include "hash.h"

h_table*get_table(void)
{
    h_table*Table;
    Table=(h_table*)malloc(sizeof(h_table)*key_size);
    for(int i=0;i<26;i++)
    {
    (Table+i)->head=(Table+i)->tail= NULL ;
    (Table+i)->count=0;
    }
    return Table;
}

node*getnode(char name[])
{
    node*new_node;
    new_node=(node*)malloc(sizeof(node));
    strcpy(new_node->name,name);
    new_node->ptr=NULL;
    return new_node;
}

int get_key(char ch)
{
    return (int)(toupper(ch))-'A';
}


int insert(h_table*Table,char name[])
{
    node*new_node;
    if((name[0]>='a'&& name[0]<='z')||(name[0]>='A'&& name[0]<='Z'))
    {
     new_node=getnode(name);
     int key=get_key(name[0]);

    if((Table+key)->count==0)
    {
        (Table+key)->head=new_node;
        (Table+key)->tail=new_node;
        (Table+key)->count++;
    }
    else
    {
     (Table+key)->tail->ptr=new_node;
     (Table+key)->tail=new_node;
     (Table+key)->count++;
    }
}
}
void print(h_table*Table)
{
    for(int i=0;i<26;i++)
    {
        node *temp,*next;
        temp=(Table+i)->head;
        int c=(Table+i)->count;
        printf("Table- %d :",i);
        while(c!=0)
        {
            next=temp;
            temp=temp->ptr;
            printf(" %s-> ",next->name);
            c--;
        }
        printf("\n");
    }
}
