#ifndef _hash_h
#define _hash_
#define key_size 26
#define max_ 20

typedef struct _node
{
    char name[max_];
    struct _node *ptr
}node;

typedef struct h_table
{
    int count;
    node *head,*tail;
}h_table;

node*getnode(char name[]);
h_table *get_table(void);
int get_key(char ch);
int insert(h_table*Table,char name[]);
void print(h_table *);

#endif // _hash_h
