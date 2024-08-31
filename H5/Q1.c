#include <stdio.h>
#include <stdlib.h>
/*
* Project: Linked Lists
* Name   : 
* Date   : 05/07/2024
* File   : Q1.c
* Notes  : Lines 59,60,and 61 are not needed in the code, but I included them to make the code more readable and matches the sample given assigmnet. Adding on this, readme file shows all of the citations and references used in the code.
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

// Function to insert a node at the beginning
struct Node* insertAtBeg(struct Node* head, int new_data) {
    struct Node* new_node = createNode(new_data);
    new_node->next = head;
    return new_node; // Return the new head of the list
}

// Function to append a node at the end
struct Node* appendNode(struct Node* head, int new_data) {
    struct Node* new_node = createNode(new_data);
    if (head == NULL) {
        return new_node; // If the list is empty, the new node is now the head
    } else {
        struct Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
        return head; // Return the original head
    }
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("Data = %d\n", node->data);
        node = node->next;
    }
}

int main() {
    int n, i, data;
    struct Node* head = NULL;

    printf("Linked List: Insert a new node at the beginning of a Singly Linked List:\n");
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        head = appendNode(head, data); // Update head if necessary
    }

    printf("\nData entered in the list are:\n");
    printList(head);

    printf("\nInput data to insert at the beginning of the list: ");
    scanf("%d", &data);
    head = insertAtBeg(head, data); // Update the head when inserting at the beginning

    printf("\nData after inserted in the list are:\n");
    printList(head);

    return 0;
}
