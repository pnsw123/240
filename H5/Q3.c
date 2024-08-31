#include <stdio.h>
#include <stdlib.h>
/*
* Project: Linked Lists
* Name   : 
* Date   : 05/07/2024
* File   : Q3.c
* Notes  : Lines 88 and 81 are not needed in the code, but I included them to make the code more readable and matches the sample given assigmnet.  
*/

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node at the end
struct Node* appendNode(struct Node* head, int new_data) {
    struct Node* new_node = createNode(new_data);
    if (head == NULL) {
        head = new_node;
    } else {
        struct Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
    return head;
}

// Function to insert a node at a specified position
struct Node* insertAtPosition(struct Node* head, int data, int position, int numberOfNodes) {
    // Position validation
    if (position < 1 || position > numberOfNodes + 1) {
        printf("Error: Invalid position!\n");
        exit(1);
    }

    struct Node* new_node = createNode(data);
    // If the position is 1, insert at the beginning
    if (position == 1) {
        new_node->next = head;
        head = new_node;
    } else {
        struct Node* current = head;
        struct Node* previous = NULL;
        int k = 1;
        while (current != NULL && k < position) {
            previous = current;
            current = current->next;
            k++;
        }
        previous->next = new_node;
        new_node->next = current;
    }
    return head;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("Data = %d\n", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    int numberOfNodes, data, position;

    printf("Linked List : Insert a new node at the middle of the Linked List :\n");
    printf("--------------------------------------------------------------------\n");
    
    // Ensuring at least 3 nodes are entered
    do {
        printf("Input the number of nodes (3 or more): ");
        scanf("%d", &numberOfNodes);
        if (numberOfNodes < 3) {
            printf("Error: You must enter at least 3 nodes.\n");
        }
    } while (numberOfNodes < 3);

    for (int i = 1; i <= numberOfNodes; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        head = appendNode(head, data);
    }

    printf("\nData entered in the list are :\n");
    printList(head);

    printf("\nInput data to insert in the middle of the list : ");
    scanf("%d", &data);
    printf("Input the position to insert new node : ");
    scanf("%d", &position);

    head = insertAtPosition(head, data, position, numberOfNodes);

    printf("\nInsertion completed successfully.\n");
    printf("\nThe new list is :\n");
    printList(head);

    return 0;
}
