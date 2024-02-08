#define SUCCESS 1
#define FAILED 0

struct node {
    int data;
    struct node *ptr;
};
typedef struct node Node;

struct link_list{
    Node *head,*tail;
    int count;
};
typedef struct link_list List;

List *initialise_list();
int insert_at_beg(List*,int data);
int insert_at_end(List*,int data);
int search_list(List*,int element);


