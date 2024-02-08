#include<stdlib.h>
#include<stdio.h>
typedef struct _node_
{
    int data;
    struct _node_ *ptr;

}Node;

typedef struct _queue_
{
    Node *head,*tail;
    int count;
}Queue;


#define INSERT_SUCCESS 1
#define DELETED 1
#define FAILED 0

Queue *initialise_queue();
int insert_data(Queue*,int);
int delete_data(Queue*);
