#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
  int v;             // Data of the node
  struct Node *next; // Pointer to the next node
};

// Function to add a node to the beginning of the linked list
void add(struct Node **p, struct Node *n) {
  n->next = *p; // Set the next pointer of the new node to the current head of
                // the list
  *p = n;       // Update the head pointer to point to the new node
}

// Function to remove a specific node from the linked list
void remove_node(struct Node **p, struct Node *n) {
  if (*p == n) {  // If the node to be removed is the head of the list
    *p = n->next; // Update the head pointer to skip the node to be removed
    free(n);      // Free the memory allocated for the removed node
    return;
  }

  struct Node *prev = *p;
  struct Node *curr = prev->next;
  while (curr != NULL) { // Traverse the list to find the node to be removed
    if (curr == n) {
      prev->next = curr->next; // Update the previous node's next pointer to
                               // skip the node to be removed
      free(curr);              // Free the memory allocated for the removed node
      return;
    }
    prev = curr; // Move to the next node
    curr = curr->next;
  }
}

// Function to find the position of a value in the linked list
int find(struct Node **p, int value) {
  struct Node *t = *p;
  int i = 0;
  while (t != NULL) {    // Traverse the list
    if (t->v == value) { // If the value is found
      return i;          // Return its position
    }
    i++;
    t = t->next;
  }
  return -1; // If the value is not found, return -1
}

// Function to edit the value of a node in the linked list
void edit(struct Node **p, int old, int _new) {
  struct Node *t = *p;
  while (t != NULL) {  // Traverse the list
    if (t->v == old) { // If the old value is found
      t->v = _new;     // Update it with the new value
    }
    t = t->next;
  }
}

// Function to display the elements of the linked list
void show(struct Node **p) {
  printf("Start -> ");
  struct Node *t = *p;
  while (t != NULL) {       // Traverse the list
    printf("%d -> ", t->v); // Print the value of each node
    t = t->next;
  }
  printf("NULL\n");
}

int main() {
  struct Node *pointer = NULL;
  struct Node a, b, c;
  a.v = 3; // Initialize node 'a' with value 3
  b.v = 6; // Initialize node 'b' with value 6
  c.v = 7; // Initialize node 'c' with value 7

  struct Node *d = (struct Node *)malloc(
      sizeof(struct Node)); // Dynamically allocate memory for node 'd'
  d->v = 5;                 // Initialize node 'd' with value 5

  // Add nodes 'a', 'b', 'c', and 'd' to the linked list
  add(&pointer, &a);
  add(&pointer, &b);
  add(&pointer, &c);
  add(&pointer, d);

  // Remove node 'd' from the linked list
  remove_node(&pointer, d);

  // Edit the value of node 'c' from 7 to 10
  edit(&pointer, 7, 10);

  // Display the elements of the linked list
  show(&pointer);

  printf("\n");

  // Find the position of value 3 in the linked list
  int pos = find(&pointer, 3);
  if (pos == -1) {
    printf("Not found\n");
  } else {
    printf("found 3 at: %d\n", pos);
  }

  return 0;
}
