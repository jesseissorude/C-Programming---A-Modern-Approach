/*  Idea: I want to know what my computer allocates for 
    int
    long int
    short int

    Update: Now that it's done, I could port this over (if necessary) and 
    run it on other devices (especially interesting on microcrontrollers)
*/

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Maximum value of long int: %ld\n", LONG_MAX);
    printf("Maximum value of short int: %d\n", SHRT_MAX);
    return 0;
}