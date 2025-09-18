#include <stdio.h>

void swap(int* a, int* b) {
    // todo
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int length) {
    // todo
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print_arr(int arr[], int length) {
    // todo
    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
}

int main() {
    // initialize array
    int arr[] = {1, 10, 3, 4, 6};
    int size = 5;

    // print before array
    printf("before:\n");
    print_arr(arr, size);

    // sort
    bubble_sort(arr, size);

    // print after array
    printf("after:\n");
    print_arr(arr, size);

    return 0;
}

