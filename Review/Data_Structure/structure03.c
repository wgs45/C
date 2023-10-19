#include <stdio.h>

#define MAX_LEN 32
// contact struct definition 
struct Contact {
    char name[MAX_LEN], address[MAX_LEN];
    int number;
};

int main() {
    struct Contact contacts;
    int count = 0;

    // ask how many contacts
    printf("Add how many contacts: ");
    scanf("%d", &count);

    if(count <= 0) {
        return 0;
    };

    for(int i = 0; i < count; i++) {
        printf("Input fullname: ");
        scanf("%s", contacts.name);

        printf("Address: ");
        scanf("%s", contacts.address);

        printf("Phone number: ");
        scanf("%d", contacts.number);
    }

    return 0;
}