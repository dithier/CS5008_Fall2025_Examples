#include <stdio.h>

int main() {
    // while loop printing countdown from 10
    int count = 0;

    while (count < 10) {
        printf("%d\n", count);
        count++;
    }

    printf("\n");

    // do while with count less than 5
    count = 0;

    do {
        count++;
        printf("%d\n", count);
    } while (count < 5);

    // for loop printing out count
    for (int i = 0; i < 3; i++) {
        printf("%d\n", i);
    }

    return 0;
}
