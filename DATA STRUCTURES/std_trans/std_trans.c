#include "std_trans.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

List* createList() {
    List* list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void insertStudent(List* list, Student student) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->student = student;
    newNode->next = NULL;

    if (list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

int deleteStudent(List* list, int studentId) {
    Node* current = list->head;
    Node* prev = NULL;

    while (current != NULL) {
        if (current->student.id == studentId) {
            if (prev == NULL) {
                list->head = current->next;
                if (list->tail == current) {
                    list->tail = NULL;
                }
            } else {
                prev->next = current->next;
                if (list->tail == current) {
                    list->tail = prev;
                }
            }
            free(current);
            return 1;
        }
        prev = current;
        current = current->next;
    }

    return 0;
}

Node* searchStudent(List* list, int studentId) {
    Node* current = list->head;
    while (current != NULL) {
        if (current->student.id == studentId) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void logTransaction(List* list, const char* operation) {
    TransactionLog log;
    strcpy(log.type_of_operation, operation);

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->student.id = -1;
    newNode->log = log;
    newNode->next = NULL;

    if (list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void countTransactions(List* list, int* insertCount, int* deleteCount) {
    *insertCount = 0;
    *deleteCount = 0;

    Node* current = list->head;
    while (current != NULL) {
        if (strcmp(current->log.type_of_operation, "INSERT") == 0) {
            (*insertCount)++;
        } else if (strcmp(current->log.type_of_operation, "DELETE") == 0) {
            (*deleteCount)++;
        }
        current = current->next;
    }
}


