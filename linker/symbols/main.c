#include <stdio.h>

extern int globalX;
// extern long int globalX;

int sum(int a, int b);
int diff(int a, int b);

int main() {
    int summation = sum(1, 2);
    int difference = diff(3, 1);

    printf("sum: %d, diff: %d \n", summation, difference);

    printf("globalX: %d\n", globalX);

    return 0;
}
