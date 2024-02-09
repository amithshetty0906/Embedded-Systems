#include <iostream>

int findMax(int arr[], int n) {
    int max = arr[0]; // Assume first element as maximum
    
    // Traverse through the array to find the maximum element
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr[] = {5, 8, 3, 9, 1, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    int maximum = findMax(arr, size);
    
    std::cout << "The maximum number in the array is: " << maximum << std::endl;

    return 0;
}

//hell