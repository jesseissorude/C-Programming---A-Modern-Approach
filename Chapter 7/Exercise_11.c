/*  CH 7 - Exercise 11:
    (Doing this one because it suggested using 'getchar'
    and I've never used that.)

    Check validity of airline ticket number
*/

#include <stdio.h>

int main(void) {
    printf("~ Airline Ticket Number Validator - ver 1.0 ~\n");
    printf("Enter ticket number: ");

    int ticket_number[100];
    int last_digit;

    int read_num;
    while((read_num = getchar()) != '\n') { // assumes number isn't too long for the buffer
        
    }

    if (ticket_number % 7 == last_digit) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }
}