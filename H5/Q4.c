#include <stdio.h>
#include <stdlib.h>
/*
* Project: Linked Lists
* Name   : 
* Date   : 05/07/2024
* File   : Q4.c
* Notes  : I copeid most of the code from Q2.c and made some changes to it. I added a new function to delete the first node of the linked list.    
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

// Function to delete the first node
struct Node* deleteFirstNode(struct Node* head) {
    if (head == NULL) {
        printf("List is already empty.\n");
        return NULL;
    } else {
        struct Node* tempNode = head;
        int data = head->data;
        head = head->next;
        free(tempNode);
        printf("Data of node 1 which is being deleted is : %d\n", data);
        return head;
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
    struct Node* head = NULL;
    int numberOfNodes, data;

    printf("Linked List : Delete first node of Singly Linked List :\n");
    printf("--------------------------------------------------------\n");
    
    printf("Input the number of nodes : ");
    scanf("%d", &numberOfNodes);

    for (int i = 1; i <= numberOfNodes; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &data);
        head = appendNode(head, data);
    }

    printf("\nData entered in the list are :\n");
    printList(head);

    head = deleteFirstNode(head);

    printf("\nData, after deletion of first node :\n");
    printList(head);

    return 0;
}
