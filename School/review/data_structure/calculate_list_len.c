#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a struct called Node to represent a node in a linked list
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node
};

// Function to create a random linked list
struct Node* createRandomList(int maxLength);

// Function to calculate the length of a linked list
int calculateListLength(struct Node* head);

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time

    // Create a random linked list with a maximum length of 100
    struct Node* head = createRandomList(100);

    // Traverse the linked list and print the data of each node
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Calculate the length of the linked list and print it
    int length = calculateListLength(head);
    printf("Length of the list: %d\n", length);

    // Free the memory allocated for each node in the linked list
    current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}

// Function to create a random linked list
struct Node* createRandomList(int maxLength) {
    if (maxLength <= 0) {
        return NULL;
    }

    // Generate a random length for the linked list
    int length = rand() % maxLength + 1;

    // Create the head node of the linked list
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = rand() % 100;  // Generate a random data value for the head node
    head->next = NULL;

    struct Node* current = head;  // Set the current node to the head node
    for (int i = 1; i < length; ++i) {
        // Create a new node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = rand() % 100;  // Generate a random data value for the new node
        newNode->next = NULL;

        // Append the new node to the current node
        current->next = newNode;

        // Update the current node to the new node
        current = newNode;
    }

    return head;
}

// Function to calculate the length of a linked list
int calculateListLength(struct Node* head) {
    int length = 0;  // Initialize the length to 0
    struct Node* current = head;  // Set the current node to the head node

    // Traverse the linked list and increment the length for each node
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}
