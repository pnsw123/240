#include <stdio.h>

/*
* Project: Arrays
* Name   : 
* Date   : 04/02/2024
* File   : Q2.c
* Notes  : line 14, I choose [100] as the size of the array, this size can be changed to any size, its not mandatory to be 100
*/

int main(){

    // declare an integer array of size n
    int arr[100];
    //intlize the variable count to 0
    int count = 0;
    // intliaze the variable n to 0
    int n = 0;
    

    // ask user to enter the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n); // store user input in variable n

    // ask user to enter the elements of the array
    printf("Input %d elements in the array : \n", n);

    // use a for loop to store the elements in the array
    for(int i = 0; i < n; i++){
        printf("elements - %d : ", i);
        scanf("%d", &arr[i]); // store user input in variable arr[i]
    }


     // loop through each element of the array from index 0 to n -2 
    for(int i = 0; i < n - 1; i ++){
        for(int j = i +1 ; j < n ; j++){
            // if the current element and any of the remining element are equal, increment the count by 1
            if(arr[i]==arr[j]){
                count++;
                // break from the loop
                break;
            }
    }
    }

    // print count as total number of duplicate elements
    printf("Total number of duplicate elements found in the array: %d\n", count);
    
    return 0;


}
