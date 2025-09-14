#include <stdio.h>
#include <string.h>

// make student struct
typedef struct student {
    char name[10];
    int age;
    int id_number;
} student_t;

// print student struct
void print_student(student_t student) {
    // to do
    printf("%s\n age: %d\n id: %d\n", student.name, student.age,
           student.id_number);
}

int main() {
    // make a student
    student_t Kwame;

    // strcpy name
    strcpy(Kwame.name, "Kwame");

    // initialize ag enad id number
    Kwame.age = 20;
    Kwame.id_number = 1;

    // call print studnet
    print_student(Kwame);

    return 0;
}
