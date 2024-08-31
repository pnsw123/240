#include <stdio.h>

/*Project: Operations in C
 * Name  : 
 * Date  : 2/10/2024
 * File  : Q2.c
 * Notes : null
 */

int main(){
    // declare radius, perimeter, and the area of a circle
    float radius;
    float perimeter;
    float areaOfCircle;
   
    // request the radius value from the user
    printf("Please enter a radius to calculate the perimeter and area of a circle:\n");
    scanf("%f", &radius); // Using "%f" for float input

    perimeter = 2 * 3.14 * radius;  // perimeter formula 
    areaOfCircle = radius * radius * 3.14;

    // print them out
    printf("Perimeter of the Circle = %.6f inches\n", perimeter); 
    printf("Area of the Circle = %.6f square inches\n", areaOfCircle);

    return 0;
}

