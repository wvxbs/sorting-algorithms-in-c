#include <stdio.h>
#include "bubbleSort/bubbleSort.h"

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr1, n);
    printf("Sorted array (Bubble Sort):\n");
    printArray(arr1, n);

    return 0;
}
