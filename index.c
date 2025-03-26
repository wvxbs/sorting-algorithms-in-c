#include <stdio.h>
#include "bubbleSort/bubbleSort.h"
#include "insertionSort/insertionSort.h"
#include "selectionSort/selectionSort.h"
#include "shellSort/shellSort.h"
#include "mergeSort/mergeSort.h"

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

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    insertionSort(arr2, n);
    printf("Sorted array (Insertion Sort):\n");
    printArray(arr2, n);

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    selectionSort(arr3, n);
    printf("Sorted array (Selection Sort):\n");
    printArray(arr3, n);

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    shellSort(arr4, n);
    printf("Sorted array (Shell Sort):\n");
    printArray(arr4, n);

    int arr5[] = {64, 34, 25, 12, 22, 11, 90};
    mergeSort(arr5, 0, n - 1);
    printf("Sorted array (Merge Sort):\n");
    printArray(arr5, n);

    return 0;
}
