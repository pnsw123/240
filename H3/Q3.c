#include <stdio.h>

/*
* Project: Arrays
* Name   : 
* Date   : 04/02/2024
* File   : Q3.c
* Notes  : line 28 prints an extra space which is not needed, however, I did this to match up with the format of the output.
*/

int main() {
    // declare an integer array of size n
    int arr[100];
    int n = 0;

    // ask user to enter the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n); // store user input in variable n

    // ask user to enter the elements of the array
    printf("Input %d elements in the array : \n", n);

    // use a for loop to store the elements in the array
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n"); // extra space

    // print the unique elements in the array
     printf("The unique elements found in the array are:\n");


    // For loop to find the unique elements in the array
    for(int i = 0; i < n; i++) {
        int count = 0; // set count to 0
        for(int j = 0; j < n; j++) {
            // If an element is duplicated, increment count
            if (arr[i] == arr[j] && i != j) {
                count++;
                break; // Once a duplicate is found, no need to check further
            }
        }
        // If count is still 0, the element is unique
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
