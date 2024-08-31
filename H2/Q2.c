#include <stdio.h>
/*Project: Loops in C
 * Name  : 
 * Date  : 3/05/2024
 * File  : Q2.c
 * Notes : I used the ternary to find the LCM
 */


int main() {
    int num1, num2, max, lcm; // declaring the variables

    // Taking two inputs for the numbers
    printf("Enter 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Enter 2nd number for LCM: ");
    scanf("%d", &num2);

    // The LCM must be at least as large as the larger of the two numbers
    max = (num1 > num2) ? num1 : num2;
    
    // Initialize lcm to max
    lcm = max;

    // Use a while loop to increment by max until lcm is a common multiple of num1 and num2
    while (lcm % num1 != 0 || lcm % num2 != 0) {
        lcm += max; // Increment lcm by max
    }

    // Displaying the result
    printf("The LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
