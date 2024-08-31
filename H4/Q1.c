/*
* Project: Pointers
* Name   : 
* Date   : 04/16/2024
* File   : Q1.c
* Notes  : in line 56 and 57, I assumed the input could be a capital letter or a small letter thats why I needed to check for both cases  
*/
#include <stdlib.h> 
#include <stdio.h>


// Declare two pointers
char *p1, *p2;
// Declare two integers
int i, j; 

// declare length of string
int length;

int main(){
    // intialize i and j to 0
    i = 0;
    j = 0;


    // print out message: input length of string
    printf("input the length of your string: ");
    scanf("%d", &length);
    // consume the new line character
    getchar();

    // allocate memeory for the string (length + 1)
    p1 = (char*)malloc(length + 1);
    if(p1 == NULL){
        printf("failed to allocate memory\n");
        return 1;
    }

    // print input the string
    printf("input a string: ");
    // read string into one of the pointers up to length + 1 characters
    fgets(p1, length + 1, stdin);

    // make sure the string is properly terminated
    p1[length] = '\0';

    // point p2 to the beginning of p1's memory
    p2 = p1;



      /// while second pointer is not null
    while (*p2 != '\0'){

        // if a vowel is found ++ to counter
        if(*p2 == 'a' || *p2 == 'e' || *p2 == 'i' || *p2 == 'o' || *p2 == 'u'
        || *p2 == 'A' || *p2 == 'E' || *p2 == 'I' || *p2 == 'O' || *p2 == 'U'){
            i++;
        }
        // if a consonant is found ++ to counter
        // Otherwise, consider it a consonant but only if it's an alphabetic character
        else if ((*p2 >= 'a' && *p2 <= 'z') || (*p2 >= 'A' && *p2 <= 'Z')) {
            j++;
        }
        // increment p2
        p2++;
    }

    // print number of vowels
    printf("number of vowels: %d\n", i);
    // print number of consonants
    printf("number of consonants: %d\n", j);

    // free memory
    free(p1);
    


    return 0;



}
