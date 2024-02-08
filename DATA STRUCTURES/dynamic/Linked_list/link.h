#define FAIL 0
#define SUCCESS 1
#define DELETE 1

struct _node_
{
    int data;
    struct _node_ *ptr;
};
typedef struct _node_ Node;

struct _link_
{
    Node *head;
    Node *tail;
    int count;
};

typedef struct _link_ Link_List;

Link_List *initialise_list();
int insert_at_beg(Link_List*,int data);
int insert_at_end(Link_List*,int data);
int insert_after_data(Link_List*,int data,int element);
int insert_at_pos(Link_List*,int data,int pos);
int search_list(Link_List*,int element);
int merge_list(Link_List*,Link_List*);
int split_list(Link_List*,int split_index);

int delete_at_beg(Link_List*);
int delete_at_end(Link_List*);
int delete_after_element(Link_List*,int element);
void print_list(Link_List* my_list);

