#include <stdio.h>
#include <stdlib.h>

int is_even(int number);
void say_hi();

// get average function?
float get_average(int arr[], int length);

int main() {
    // call and print is even with even num
    int result = is_even(6);
    // call and print is even with odd number
    say_hi();

    // call say hi
    int arr[] = {1, 2, 3, 4, 5, 6};
    float avg = get_average(arr, 6);

    return 0;
}

int is_even(int number) {
    // to do
    return number % 2 == 0;
}

void say_hi() {
    // todo
}
