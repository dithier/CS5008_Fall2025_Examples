#include <stdio.h>

void swap_p(int* a, int* b) {
    // do swap
    int temp = *a;
    *a = *b;
    *b = temp;

    // print what's in a and b
}

void swap(int a, int b) {
    // do swap
    int temp = a;
    a = b;
    b = temp;

    printf("In wrong swap: a: %d, b: %d\n", a, b);

    // print what's in a and b
}

int main() {
    // initialize a and b and print
    int a = 3;
    int b = 5;

    printf("a: %d, b: %d\n", a, b);

    // do incorrect swap and print
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);

    // do correct swap and print
    swap_p(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}
