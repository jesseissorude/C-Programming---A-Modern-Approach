/*  Exercise 8
    Calendar program
    Jesse Rhew
    May 8, 2024
*/

#include <stdio.h>

void get_setup_info(int*, int*);

void print_calendar(int, int);

int main (void) {

    int num_days;
    int first_day; // The first day in the month. 1-7, Sunday-Saturday.

    get_setup_info(&num_days, &first_day);
    print_calendar(num_days, first_day);    

    return 0;
}

void get_setup_info(int* num_days, int* first_day) {

    printf("Enter number of days in month: ");
    scanf("%d", num_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", first_day);

}

void print_calendar(int num, int start_day) {

    int day_to_print = 1; // start printing calendar at Sunday
    while (start_day > day_to_print) { // start by printing blank days
        printf("   ");
        day_to_print++;
   } // day_to_print now == to start day

    for (int i = 1; i <= num; i++) {
        printf("%2d ", i); // print the day
        day_to_print++;
        if (day_to_print > 7) { // wrap Saturday to Sunday
            day_to_print = 1;
            printf("\n");
        }
    }
}