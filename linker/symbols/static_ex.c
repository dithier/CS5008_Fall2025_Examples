#include <stdio.h>

static int x = 20;

void foo() {
    static int x = 25;
    printf("foo x: %d\n", x++);
}

void bar() {
    static int x = 30;
    printf("bar x: %d\n", x++);
}

int main() {
    foo();
    bar();
    foo();
    foo();
    bar();

    printf("%d\n", x);

    return 0;
}
