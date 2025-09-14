#include <stdio.h>

int main() {
    // variable_type variable_name = desired_value;
    int x = 2;

    int j = x++;  // x = 3
    ++x;          // x = 4

    char my_char = 'x';
    float my_float = 3.25;

    printf("%d\n", x);

    printf("The variable %c is equal to %d\n. My float is %f\n", my_char, x,
           my_float);

    return 0;
}
