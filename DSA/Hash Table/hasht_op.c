#include<stdio.h>
#include<stdlib.h>
#include"hasht.h"
#include<string.h>

H_table *get_table(void)
{
    H_table *Table;
    Table = (H_table*)malloc(sizeof(H_table)*KEY_SIZE);
    for(int i=0;i<26;i++)
    {
        (Table+i)->head=(Table+i)->tail=NULL;
        (Table+i)->count=0;
    }
    return Table;
}

Node *get_node(char name[])
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));
    strcpy(new_node->name,name);
    new_node->ptr=NULL;
    return new_node;
}
int get_key(char ch)
{

     return (int)(toupper(ch))-'A';
}

int insert(H_table *Table,char name[])
{
    Node *new_node;
    if((name[0]>='a'&& name[0]<='z')||(name[0]>='A'&& name[0]<='Z'))
    {
    new_node=get_node(name);
    int key=get_key(name[0]);


    if((Table+key)->count==0)
    {
        (Table+key)->head=(Table+key)->tail=new_node;
        (Table+key)->count++;
    }
    else
    {
        (Table+key)->tail->ptr=new_node;
        (Table+key)->tail=new_node;
        (Table+key)->count++;
    }
    }
    else{
        printf("The entered name is not alphabetic please give correct name\n");
    }


}

void print(H_table *Table)
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

void search(H_table *Table,char name[])
{
    int key=get_key(name[0]);
    int c=(Table+key)->count;
    Node *temp=(Table+key)->head;
    while(c!=0)
    {



        if(!(strcmp(name,temp->name)))
        {
            printf("Entered key serached in O(1) time complexity\n");
            printf("Table number : %d and element position: %d\n",key,(Table+key)->count - c+1);
            break;
        }
        temp=temp->ptr;
        c--;

    }
    if(c==0)
    {
    printf("Search name not found");
    }
}
/*void deallocate(H_table *Table)
{

    for(int i=0;i<26;i++)
    {
        Node *temp;
        temp=(Table+i)->head;
        while((Table+i)->count!=0 && temp!=NULL)
        {
            free(temp);
            (Table+i)->count--;
            temp=temp->ptr;
        }
        free(Table+i);
    }
    free(Table);
    printf("Deallocation completed\n");
}*/


void delte(H_table*Table,char name[])
{
    Node*temp;
    Node*new_node;
    if(Table->count==0)
        return 0;
    if(Table->count==1)
    {
        free(Table->head);
        Table->head=NULL;
        Table->tail=NULL;

    }
    else{
        temp=Table->head;
        Table->head=Table->head->ptr;
        free(temp);
    }
    Table->count--;
}
