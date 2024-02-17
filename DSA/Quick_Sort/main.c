#include <stdio.h>
#include "Quick_Sort.h"

int main() {
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15, 15, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quickSortLeft(arr, 0, n - 1);
    printf("\nArray after left pivot Quick Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int arr2[] = {12, 4, 5, 6, 7, 3, 1, 15, 15, 9, 10};
    quickSortRight(arr2, 0, n - 1);
    printf("\nArray after right pivot Quick Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
