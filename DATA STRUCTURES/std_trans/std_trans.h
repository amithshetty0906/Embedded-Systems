#ifndef std_trans_h
#define std_trans_h

typedef struct Student {
    int id;
    char name[50];
    float gpa;
} Student;

typedef struct TransactionLog {
    char type_of_operation[20];
    char transaction_date[20];
} TransactionLog;

typedef struct Node {
    Student student;
    TransactionLog log;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
    Node* tail;
} List;

List* createList();
void insertStudent(List* list, Student student);
int deleteStudent(List* list, int studentId);
Node* searchStudent(List* list, int studentId);
void logTransaction(List* list, const char* operation);
void countTransactions(List* list, int* insertCount, int* deleteCount);

#endif
