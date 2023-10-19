#include <stdio.h>
#include <stdlib.h>

// structure Node
struct Node{
    int data;
    struct Node *next; // next Node
};
struct Node *head = NULL; // head = starting point

void addNode(struct Node *list, int number);
void clearNode(struct Node *list);

// Push function (insert at the end)
void pushFunction(struct Node *list, int number);
// Pop function (delete the first data and return the data)
int popFunction();
// Print all data function
void printNodes(struct Node*);
// Get count function: return how many data in this queue
int count();
// Stack function (first in last out)

int main(){
    addNode(head, 10);
    addNode(head, 20);
    addNode(head, 30);
    pushFunction(head, 40);

    int data = popFunction();
    data = popFunction();

    printNodes(head);

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


void pushFunction(struct Node *list, int number) {
    struct Node *new = calloc(1, sizeof(struct Node));
    struct Node *ptr = list;

    if(new) {
        while(ptr->next != NULL) {
            if(number > head->data && ptr->next == NULL) {
                ptr->next = new;
                break;
            }
            ptr = ptr->next;
        }
        ptr->next = new;
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

int popFunction() {
    

}