#define FAILED 0
#define INSERT_SUCESS 1
#define DELETED 1

typedef struct _node_
{
    int data;
    struct _node_ *ptr;
}Node;

typedef struct _linklist_
{
    Node *head,*tail;
    int count;
}link_list;

List* initialise_list();
int insert_at_beg(List *,int data);
int insert_at_end(List *,int data);
int insert_after_data(List *,int data,int element);
int insert_at_pos(List*,int data,int pos);

int search_list(List*,int element);
int merge_list(List*,List*);
int split_list(List*,int split_index);

int delete_at_beg(List*);
int delete_at_end(List*);
int delete_element(List*,int element);

List* free_list(List*); //deallocating memory of list




