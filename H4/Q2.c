/*
* Project: Pointers
* Name   : 
* Date   : 04/16/2024
* File   : Q2.c
* Notes  : please look at readme file to see the citation for the bubble sort function that I got from the internet.
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int n, int order) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (order == 1) { // Ascending sort
                if (*(arr + i) > *(arr + j)) {
                    // Swap using pointer arithmetic
                    temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            } else { // Descending sort
                if (*(arr + i) < *(arr + j)) {
                    // Swap using pointer arithmetic
                    temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
}

int main() {
    int n, choice, i;
    
    printf("Please input the number of values in your array: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Input your array values, you should input %d values:\n", n);
    // Input elements
    for (i = 0; i < n; i++) {
        printf(" element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Prompt for sorting order
    printf("choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);
    
    // Sort the array
    bubbleSort(arr, n, choice);
    
    printf ("\n");
    // Output the sorted array
    printf("The elements in the array after sorting :\n");
    for (i = 0; i < n; i++) {
       printf(" element - %d: ", i + 1);
       printf("%d\n", arr[i]);
    }
 
    // Free dynamically allocated memory
    free(arr);
    
    return 0;
}
