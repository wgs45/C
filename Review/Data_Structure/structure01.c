#include <stdio.h>
#include <string.h>

#define MAX_LEN 32

struct Student {
    char name[MAX_LEN];
    int id;
    int age;
};

int main() {
    struct Student student1;
    student1.id = 1;
    student1.age = 16;
    strcpy(student1.name, "Alpha");
    printf("%d. %s %d\n", student1.id, student1.name, student1.age);

    struct Student *ptr = &student1;
    ptr -> id = 2;
    ptr -> age = 17;

    // add "\"" is used to seperate the string into multiple lines
    printf("After changed by ptr: %d. %s %d\n", student1.id, student1.name, student1.age);


    return 0;
}