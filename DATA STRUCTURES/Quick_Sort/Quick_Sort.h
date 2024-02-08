#ifndef QUICKSORT_H
#define QUICKSORT_H


struct Data {
    int key;
};
typedef struct Data data;

void quickSortLeft(int arr[], int low, int high);
void quickSortRight(int arr[], int low, int high);

#endif

