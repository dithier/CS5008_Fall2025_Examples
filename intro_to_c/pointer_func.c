#include <stdio.h>

void change_ptr_param(int *ptr1, int *ptr2) {
    ptr1 = ptr2;
    printf("x inside: %d\n", *ptr1);
}

int main() {
    int x = 5;
    int y = 2;

    int *ptr_x = &x;
    int *ptr_y = &y;

    printf("ptr_x: %p\n", ptr_x);
    printf("ptr_y: %p\n", ptr_y);

    change_ptr_param(ptr_x, ptr_y);

    printf("x: %d, y: %d\n", x, y);

    printf("ptr_x: %p\n", ptr_x);
    printf("ptr_y: %p\n", ptr_y);

    return 0;
}
