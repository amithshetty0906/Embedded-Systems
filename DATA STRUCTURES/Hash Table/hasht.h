#ifndef _HEADER_H_
#define _HEADER_H_
#define MAX 20
#define KEY_SIZE 26
#include<string.h>

typedef struct _node_
{
    char name[MAX];
    struct _node_ *ptr;
}Node;

typedef struct _h_table_
{
    Node *head, *tail;
    int count;
}H_table;

H_table *get_table(void);
Node *get_node(char []);
int get_key(char );
int insert(H_table *,char []);
void print(H_table *);
void deallocate(H_table *);
void search(H_table *,char []);
void delte(H_table*,char name[]);

#endif
