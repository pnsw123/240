#include <stdio.h>
#include <stdint.h>

/*Project: Loops in C
 * Name  : 
 * Date  : 3/05/2024
 * File  : Q1.c
 * Notes : I used three loops in here, not fancy function was used. 
 */



int main(){ 

int n;
// this program will take any integer as an input and will print the corresponding rows of stars

printf("Enter the number of rows:");
scanf("%d", &n);

// for loop to track of total rows (this keeps track of the rows)
for(int i =1; i<=n; i++){
// for loop to print spaces first (this keeps track of the spaces)
    for(int j = 1; j<=n-i; j++){
        printf(" ");}
    
// third for loop is to print the stars (this keeps track of the stars)
    for(int k = 0; k< i; k++){
        printf("*");
         }

     printf("\n");

   
}



  return 0;

}

