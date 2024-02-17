#include "Quick_Sort.h"


void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partitionLeft(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= j && arr[i] <= pivot)
            i++;
        while (arr[j] >= pivot && j >= i)
            j--;
        if (i >= j)
            break;
        swap(arr, i, j);
    }
    swap(arr, low, j);
    return j;
}

int partitionRight(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);
    return i + 1;
}

// Quick Sort with left pivot
void quickSortLeft(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partitionLeft(arr, low, high);
        quickSortLeft(arr, low, pivotIndex - 1);
        quickSortLeft(arr, pivotIndex + 1, high);
    }
}

// Quick Sort with right pivot
void quickSortRight(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partitionRight(arr, low, high);
        quickSortRight(arr, low, pivotIndex - 1);
        quickSortRight(arr, pivotIndex + 1, high);
    }
}

