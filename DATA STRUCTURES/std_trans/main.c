#include <stdio.h>
#include "std_trans.h"

int main() {
    List* list = createList();
    int insertCount = 0, deleteCount = 0;


    Student student1 = {1, "John", 3.8};
    insertStudent(list, student1);
    logTransaction(list, "INSERT");
    Student student2 = {2, "Alice", 3.9};
    insertStudent(list, student2);
    logTransaction(list, "INSERT");


    int studentIdToDelete = 1;
    if (deleteStudent(list, studentIdToDelete)) {
        logTransaction(list, "DELETE");
    }


    countTransactions(list, &insertCount, &deleteCount);
    printf("Insert Transactions: %d\n", insertCount);
    printf("Delete Transactions: %d\n", deleteCount);


    int studentIdToSearch = 2;
    Node* foundStudent = searchStudent(list, studentIdToSearch);
    if (foundStudent != NULL) {
        printf("Student Found:\n");
        printf("ID: %d\n", foundStudent->student.id);
        printf("Name: %s\n", foundStudent->student.name);
        printf("GPA: %.2f\n", foundStudent->student.gpa);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
