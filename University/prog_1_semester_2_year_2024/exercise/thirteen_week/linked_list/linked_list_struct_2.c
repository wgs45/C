#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
  int v;             // Data of the node
  struct Node *next; // Pointer to the next node
};

// Function to add a new node to the beginning of the linked list
void add(struct Node **p, int value) {
  // Allocate memory for the new node
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  // Check if memory allocation was successful
  if (new_node == NULL) {
    printf("Memory allocation failed.\n");
    exit(1);
  }
  // Initialize the new node with the given value
  new_node->v = value;
  // Set the next pointer of the new node to the current head of the list
  new_node->next = *p;
  // Update the head pointer to point to the new node
  *p = new_node;
}

// Function to remove a node from the linked list based on its value
void remove_node(struct Node **p, int value) {
  // Initialize pointers for traversal
  struct Node *current = *p;
  struct Node *prev = NULL;

  // Traverse the list to find the node with the given value
  while (current != NULL) {
    if (current->v == value) {
      // If the node to be removed is the first node
      if (prev == NULL) {
        *p = current->next; // Update the head pointer to skip the first node
      } else {
        prev->next = current->next; // Update the previous node's next pointer
                                    // to skip the current node
      }
      // Free the memory allocated for the removed node
      free(current);
      return;
    }
    // Move to the next node
    prev = current;
    current = current->next;
  }
}

// Function to display the elements of the linked list
void show(struct Node *start) {
  printf("Start -> ");
  // Traverse the list and print each node's value
  while (start != NULL) {
    printf("%d -> ", start->v);
    start = start->next;
  }
  printf("NULL\n");
}

int main() {
  struct Node *start = NULL; // Initialize the head pointer of the linked list

  // Add nodes to the linked list
  add(&start, 3);
  add(&start, 6);
  add(&start, 7);

  // Display the original linked list
  printf("Original list: ");
  show(start);

  // Remove a node with value 6 from the linked list
  remove_node(&start, 6);
  printf("List after removing 6: ");
  show(start);

  // Add a new node with value 8 after the node with value 3
  struct Node *pointer = start;
  int target = 3;
  while (pointer != NULL) {
    if (pointer->v == target) {
      // Allocate memory for the new node
      struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
      // Check if memory allocation was successful
      if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
      }
      // Initialize the new node with value 8
      new_node->v = 8;
      // Insert the new node into the linked list
      new_node->next = pointer->next;
      pointer->next = new_node;
      break;
    }
    pointer = pointer->next;
  }
  printf("List after adding 8 after 3: ");
  show(start);

  return 0;
}
