/* The following is exercise 8 from the end of Chapter 5 */
/*
Here's a simplified version of the Beaufort scale, which is used to measure wind force:

Velocity (knots)        Description
Less than 1             Calm
1-3                     Light air
4-27                    Breeze
28-47                   Gale
48-63                   Storm
Above 63                Hurricane

Write a program that asks the user to enter a wind velocity (in knots), then displays the corresponding description.

*/
#include <stdio.h>

int main () {
    printf("\nI'll print today's wind in the Beaufort scale for you.\n");
    printf("Enter a wind velocity (in knots): ");
    int speed;
    scanf("%d", &speed);
    // Opportunity here to do input validation
    
    printf("\nAccording to the Beaufort scale, at %d the wind is ", speed);
    if (speed < 1)
        printf("Calm");
    else if (speed >= 1 && speed <= 3)
        printf("Light air");
    else if (speed >= 4 && speed <= 27)
        printf("Breeze");
    else if (speed >= 28 && speed <= 47)
        printf("Gale");
    else if (speed >= 48 && speed <= 63)
        printf("Storm");
    else // speed > 63
        printf("Hurricane");

    return 0;
}