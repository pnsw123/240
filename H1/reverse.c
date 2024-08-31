
#include <stdio.h>
#include <string.h>

/*Project: ClassAssignment
 * Name  : 
 * Date  : 2/15/2024
 * File  : ClassAssignment.c
 * Notes : null
 */
  

int main(){
    // initialize a character array with sufficient space

    char str[200]; // assume the string is not longer than 1000 characters

    printf("Enter a string: "); // ask the user to enter a string
    fgets(str, sizeof(str), stdin); // use fgets() to read the string from the user

    // a temporary character to store a character for swapping
    char temp;
    int i = 0;
    int j = 0;

    // find the length of the string using strlen() function
    int length = strlen(str);
    length = length - 1; //  -1 to remove the new line -- this is a Copilot suggestion.

    // swap the characters from the beginning to the end


    // I got the idea from the slides.
    for (i = 0, j = length - 1; i < j; i++, j--) {         
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    
  

    // print the reversed string

    printf("Reversed string: %s\n", str);

    return 0;

}
