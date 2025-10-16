#include <stdio.h>

int main() {
    // create filepointer
    FILE *fp = NULL;

    // open file
    fp = fopen("data.txt", "r");

    int buffer = 0;

    // read data and print with feof
    while (!feof(fp)) {
        fscanf(fp, "%d", &buffer);
        printf("%d\n", buffer);
    }

    // close file ppointer
    fclose(fp);

    return 0;
}
