#include <stdio.h>

#include "diff.c"
#include "sum.c"

int main() {
    int summation = sum(1, 2);
    int difference = diff(3, 1);

    printf("sum: %d, diff: %d \n", summation, difference);

    return 0;
}
