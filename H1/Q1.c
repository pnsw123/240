#include <stdio.h>

/*Project: Operations in C
 * Name  : 
 * Date  : 2/10/2024
 * File  : Q1.c
 * Notes : null
 */

int main (){

    // declare total number, days, weeks, years and store them as integers [this can be stored as long but int works best in here]
    int nOfDays; 
    int days; 
    int weeks;
    int years;
    

    printf("Please enter a number of days:\n");  // ask the user to give number of days

    scanf("%d", &nOfDays);

    years = nOfDays/ 365;           // Convert total number of days to years, weeks, and days           
    weeks = (nOfDays % 365) / 7;
    days = (nOfDays % 365) % 7;    // [I got the idea from geeksforgeeks, please refer to readme for the full citation]


    // print them out
    printf("Number of days: %d\n", nOfDays); 
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);



    return 0;


}
