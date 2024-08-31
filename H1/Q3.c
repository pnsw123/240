#include <stdio.h>
#include <math.h>

/* Project: Operations in C
 * Name  :
 * Date  : 2/10/2024
 * File  : Q3.c
 * Notes : null
 */

int main() {
    int number1, number2, number3, max; //declaration 

    printf("Input the first integer: ");
    scanf("%d", &number1);
    printf("Input the second integer: ");
    scanf("%d", &number2);
    printf("Input the third integer: ");
    scanf("%d", &number3);

    max = (number1 + number2 +fabs(number1 - number2)) / 2; // Finds max of first two 
    max = (max + number3 + fabs(max - number3)) / 2; // Then finds max of that result and third [I got the idea from Stack Exchange -- please refer to readme file for more info]

    printf("Maximum value of three integers: %d\n", max);

    return 0;
}
