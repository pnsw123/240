#include <stdio.h>

/*
* Project: Arrays
* Name   : 
* Date   : 04/02/2024
* File   : Q1.c
* Notes  : ine 31 and 49 print an extra space which is not needed, however, I did this to match up with the format of the output.
*/

int main (){    

   
    int n;  // declare integer variable to be stored in array
   

    // prompt user to enter  number
    printf("Input the number of the elements to be stored in the array :");
    scanf("%d", &n); // store user input in variable n

    int arr[n]; // Declare an array to store the elements
    printf("input %d elements in the array : \n", n);

    // for loop to print the elements of the array
    for (int i = 0 ; i < n ; i++){
        printf("elements - %d : ", i);
        scanf("%d", &arr[i]); // store user input in variable num 
    }
    
    // find the odd and even numbers in the array
    printf("\n");


    // print even numbers
    printf("The Even elements are :\n");
    for (int i = 0 ; i < n ; i++){
        if (arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    // print odd numbers
    printf("\nThe Odd elements are :\n");
    for(int i = 0 ; i < n ; i++){
        if (arr[i] % 2 != 0){
            printf("%d ", arr[i]);}
    
    }
    printf("\n");


    
    return 0;
}
