#include <stdio.h>
#include <stdlib.h>
/*
* Project: Linked Lists
* Name   : 
* Date   : 05/07/2024
* File   : Q2.c
* Notes  : Lines 53,54,and 55 are not needed in the code, but I included them to make the code more readable and matches the sample given assigmnet.  
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
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
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
    int numberOfNodes, data, i;
    struct Node* head = NULL;

    printf("Linked List : Insert a new node at the end of a Singly Linked List :\n");
    printf("--------------------------------------------------\n");
    printf("Input the number of nodes : ");
    // Input the number of nodes
    scanf("%d", &numberOfNodes);

    for (i = 1; i <= numberOfNodes; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        //insert a node at the end
        head = appendNode(head, data);
    }

    printf("\nData entered in the list are :\n");
    printList(head);

    printf("\nInput data to insert at the end of the list : ");
    scanf("%d", &data);
    // Insert a node at the end
    head = appendNode(head, data);

    printf("\nData after inserted in the list are :\n");
    printList(head);

    return 0;
}
