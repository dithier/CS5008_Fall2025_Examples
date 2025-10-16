#include <stdio.h>

int main() {
    // create filepointer
    FILE *fp = fopen("data.txt", "r");

    // open file

    int buffer = 0;

    // read data and print with fscanf
    while (fscanf(fp, "%d", &buffer) == 1) {
        printf("%d\n", buffer);
    }

    // close filepointer
    fclose(fp);

    return 0;
}
