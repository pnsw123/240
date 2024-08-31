#include <stdio.h>
#include <stdlib.h>
/*
* Project: Extra Credit
* Name   : 
* Date   : 05/07/2024
* File   : Q5.c
* Notes  : please consider reading the readme file for more information about the code and the references used in the code.
*/


// Define the node structure
struct Node {
    int data;
    struct Node* next;
};
// define merge struct
struct Node* merge(struct Node* first, struct Node* second) {
    if (!first) return second;
    if (!second) return first;

    if (first->data < second->data) {
        first->next = merge(first->next, second);
        return first;
    } else {
        second->next = merge(first, second->next);
        return second;
    }
}
// split function
void split(struct Node* head, struct Node** first_half, struct Node** second_half) {
    struct Node* slow = head, *fast = head->next;
    while (fast) {
        fast = fast->next;
        if (fast) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *first_half = head;
    *second_half = slow->next;
    slow->next = NULL;
}
// mergeSort function
void mergeSort(struct Node** head_ref) {
    struct Node* head = *head_ref, *first_half, *second_half;

    if (!head || !(head->next)) return;

    split(head, &first_half, &second_half);
    mergeSort(&first_half);
    mergeSort(&second_half);
    *head_ref = merge(first_half, second_half);
}
// append function to add new data to the linked list
void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (!(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    struct Node* last = *head_ref;
    while (last->next) last = last->next;
    last->next = new_node;
}
// print the linked list
void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data);
        append(&head, data);
    }
    printf("\n");

    printf("Original linked list: ");
    printf("\n");
    printList(head);
    
    mergeSort(&head);

    printf("Sorted linked list: ");
    printf("\n");
    printList(head);
 
    return 0;
}
