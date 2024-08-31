#include <stdio.h>
/*Project: Loops in C
 * Name  : 
 * Date  : 3/05/2024
 * File  : Q3.c
 * Notes : I used the Alternating series topic that I learned from calc2 to solve this question 
 */


int main() {
    int x, sum = 0; //declare the needed variables
    int terms;

    printf("Input the value of x: ");
    scanf("%d", &x); 

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    printf("The values of the series:\n");

    // get the power value
    for (int i = 0; i < terms; i++) {
        int power = 2 * i + 1; // The exponent
        int termValue = 1; // Start with 1 for multiplication

        // compute x to the power of (2*i + 1)
        for (int j = 0; j < power; j++) {
            termValue *= x;
        }

        // Alternate the sign of the term if i is odd
        if (i % 2 != 0) {
            termValue = -termValue;
        }

        // Print the term
        printf("%d\n", termValue);

        // Add the term to the sum
        sum += termValue;
    }

    // Print the sum after the loop
    printf("The sum = %d\n", sum);
    return 0;
}
