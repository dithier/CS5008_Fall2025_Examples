#include <stdio.h>

void test(int arr[], int len) { printf("%d\n", arr[2]); }

void test2(int *arr, int len) { printf("%d\n", arr[2]); }

int main() {
    int arr[] = {1, 2, 3, 4};

    printf("%p, %p, %p, %p\n", &arr[0], &arr[1], &arr[2], &arr[3]);

    printf("%p\n", arr);

    printf("%d\n", *(arr + 2));

    test(arr, 4);

    test2(arr, 4);

    return 0;
}
