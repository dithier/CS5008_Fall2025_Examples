#include <stdio.h>

void test(int arr[], int len) {
    // print out element 2
    printf("%d\n", arr[2]);
}

void test2(int* arr, int len) {
    // print out element 2
    printf("%d\n", arr[2]);
}

int main() {
    // initialize int array
    int array[] = {1, 5, 2, 10, 15};
    int size = sizeof(array) / sizeof(array[0]);

    // print adress for each element in array
    for (int i = 0; i < size; i++) {
        printf("%p\n", &array[i]);
    }
    // print pointer address of array
    printf("%p\n", array);

    // use pointer arithmatic to print element 2
    printf("%d\n", *(array + 2));

    // call test
    test(array, size);

    // call test2
    test2(array, size);

    return 0;
}
