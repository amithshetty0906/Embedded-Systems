#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

Queue *initialise_queue()
{
    Queue *my_queue;

    my_queue = (Queue*)malloc(sizeof(Queue));
    my_queue->head=my_queue->tail=NULL;
    my_queue->count=0;

    return my_queue;
}

Node *get_node(int data)
{
    Node *new_node;

    new_node=(Node*)malloc(sizeof(Node));
    new_node->data= data;
    new_node->ptr = NULL;

    return new_node;
}


int insert_data(Queue* my_queue,int data)
{
    Node *new_node = get_node(data);

    if(new_node == NULL)
        return FAILED;


    if(my_queue->count == 0)
    {
        my_queue->head = my_queue->tail = new_node;
        my_queue->count++;
    }
    else
    {
        my_queue->tail->ptr=new_node;
        my_queue->tail=new_node;
        my_queue->count++;
    }
    return INSERT_SUCCESS;

}

int delete_data(Queue *my_queue)
{
    Node*temp;

    if(my_queue->count==0)
        return FAILED;
    if(my_queue->count==1)
    {
        free(my_queue->head);
        my_queue->head=NULL;
        my_queue->tail= NULL;
    }
    else
    {
        temp=my_queue->head;
        my_queue->head=my_queue->head->ptr;
        free(temp);
    }
    my_queue->count--;
    return DELETED;
}

/* 1. Check if the queue is empty: The function first checks if the count of elements in the queue (`my_queue->count`) is equal to 0. If it is, then there is no data in the queue to delete, and the function returns a value indicating failure (FAILED).

2. Check if there is only one element in the queue: If the count of elements in the queue is equal to 1, it means that there is only one element in the queue. In this case, the function frees the memory allocated for the head node of the queue using the `free` function. It then sets both the head and tail pointers of the queue to NULL, indicating an empty queue.

3. Delete data from a non-empty queue: If there are more than one element in the queue, the function proceeds with deleting data from it. It assigns the `head` pointer of the queue to a temporary pointer variable `temp`. This temporary pointer helps keep track of the current head node.

4. Update the head pointer: The `head` pointer of the queue is then updated to point to the next node in line (`my_queue->head = my_queue->head->ptr`). This effectively removes the current head node from the queue.

5. Free memory: The memory allocated for the previous head node (pointed by `temp`) is freed using the `free` function.

6. Update count: After deleting an element from the queue, decrement the count of elements (`my_queue->count--`) to reflect that one element has been removed.

7. Return success: Finally, after successfully deleting data from the queue, return a value indicating successful deletion (DELETED).

In summary, the `delete_data` function checks if the queue is empty, deletes the data from a non-empty queue by updating the head pointer and freeing memory, and updates the count of elements in the queue. It returns a value indicating the success or failure of the deletion operation.
*/

