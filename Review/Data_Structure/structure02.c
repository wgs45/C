#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 32

struct Student {
    char name[MAX_LEN];
    int id;
    int age;
};

int main() {
    struct Student *students;
    int number = 0;
    printf("How many students: ");
    scanf("%d", &number);
    
    if (number <= 0){
        return 0;
    };

    // struct Student student2[number];
    // printf("size of student2: %d\n ", sizeof(student2));

    // Dynamic memory allocation
    // calloc(<number of data>, <memory size of data>)
    // sizeof(<data type>): how many bytes needed for 1 data
    students = calloc(number, sizeof(struct Student));
    // memory set with 0 if needed
    // memset(students, 0, number*sizeof(struct Student));
    if (students) {
        printf("Memory is aquired\n");
        for (int i = 0; i < number; ++i) {
            printf("Name: ");
            scanf("%s", students[i].name);
            printf("id: ");
            scanf("%d", &students[i].id);
            printf("Age: ");
            scanf("%d", &students[i].age);
        }
        for (int i = 0; i < number; i++) {
            printf("%d. %s %d\n", 
            students[i].id, 
            students[i].name, 
            students[i].age
            );
        }

        // release back memory to OS
        free(students);
    } 
    else {
        printf("Failed to get memory\n");
    }

    return 0;
}