#include <stdio.h>
#include <stdlib.h>

// structure Node
struct Node{
    int data;
    struct Node *next; // next Node
};
struct Node *head = NULL; // head = starting point

// void function
void printNodes(struct Node*);
void addNode(struct Node *list, int number);
void deleteNode(struct Node *list, int number);
void clearNode(struct Node *list);

int main() {
    // struct Node *new = calloc(1, sizeof(struct Node));
    // if(new) {
    //     new->data = 10; // this Node data = 10
    //     new->next = NULL; // The next Node data = NULL or None
    //     head = new; // head is pointing to the first 'new' data
    // }
    // new = calloc(1, sizeof(struct Node));
    addNode(head, 10);
    addNode(head, 20);
    addNode(head, 30);
    addNode(head, 40);

    // Delete node 
    // deleteNode(head, 10);
    // Create a func to iterate all the nodes
    printNodes(head);
    // before exit the program, the memory needs to be free / clear
    clearNode(head);

    return 0;
}

void printNodes(struct Node *list) {
    struct Node *ptr = list;

    while(ptr != NULL) {
        printf("Data = %d\n", ptr->data); // prints out data 
        ptr = ptr->next; // jump to the next pointer
    }
}

void addNode(struct Node *list, int number) {
    // takes 2 arguments, head and data
    struct Node *new = calloc(1, sizeof(struct Node));
    
    // sorting the data when finish entered
    // input next data
    // compare if (current data < next data && current data > prev data)
    // put the current data between the previous and the next data
    // ex: 10 15 20

    if(new) {
        new->data = number; // replace the next data with new data
        new->next = NULL; 

        // if still empty
        if(!head) {
            head = new;
            return; // exit the function
        }

        struct Node *ptr = list; // initially ptr = head
        struct Node *prev = NULL;

        // ptr->next = NULL if the ptr is the last node
        while(ptr->next != NULL) {
            // Use case-1: new data < head->data
            if (number < head->data) {
                // move the current head becomes
                // the next data of this new Node
                new->next = head;
                // Update head to this new Node
                head = new;
            }
            // Use case-2: new data > head is inserted in between
            else if(number < ptr->data && number > prev->data) {
                new->next = ptr;
                prev->next = ptr;
                break;
            }
            // Use case-3: new data is inserted at the end 
            else if(number > head->data && ptr->next == NULL) {
                ptr->next = new;
                break;
            }
            prev = ptr;
            ptr = ptr->next; // looping 
        }
        ptr->next = new; // last node->next = new
    }
}

void deleteNode(struct Node *list, int number) {
    struct Node *ptr = list;
    struct Node *prev = NULL;

    // while ptr not null
    while(ptr != NULL) {
        if (ptr -> data == number) {
        // The current is head
        if (ptr == list) {
            // assign head to the next node
            head = ptr -> next; 
            // free memory used by the head
            free(ptr);
            break;
        }
        // current Node is in middle/end
        else {
            prev -> next = ptr -> next;
            // erase the memory 
            free(ptr);
            break;
        }
    }
    // before ptr go to next save this ptr
    // into prev
    prev = ptr;
    // set ptr to the next data
    ptr = ptr->next; 
    }
}   

void clearNode(struct Node *list) {
    struct Node *ptr = list;
    struct Node *temp = NULL;
    // while ptr not null
    while (ptr != NULL) {
        // save the current ptr to the temp memory
        // then free the ptr
        printf("free data = %d\n", ptr->data);
        temp = ptr;
        // set ptr to the next data
        ptr = ptr->next;
        // clear memory of temp
        free(temp);
    }
}

// void clearNode(struct Node *list) {
//     struct Node *ptr = list;

//     while (ptr != NULL) {
//         for (int i = 0; i < list->data; i++) {
            
//         }
//     }
// }