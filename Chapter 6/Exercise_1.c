/*  Chapter 6: Exercise 1
    Jesse Rhew
    May 7, 2024
*/

#include <stdio.h>

int main () {
    
    double number = 1.0;
    double highest = 0.0;
    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        if (number > highest) {
            highest = number;
        }
    } while (number > 0); // user entry of 0 or negative is signal to end program
    
    printf("The largest number entered was %lf", highest);

    return 0;
}