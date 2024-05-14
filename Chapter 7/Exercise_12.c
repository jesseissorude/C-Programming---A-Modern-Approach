/*  Ch 7 - Exercise 12
    Write a program tha tprints the values of 
        sizeof(int)
        sizeof(short int)
        sizeof(long int)
        sizeof(float)
        sizeof(double)
        sizeof(long double)
*/

#include <stdio.h>

int main(void) {
    printf("\nSizes (in bytes) of\n");
    printf("%-15s %2d\n", "int:", sizeof(int));
    printf("%-15s %2d\n", "short int:", sizeof(short int));
    printf("%-15s %2d\n", "long int:", sizeof(long int));
    printf("%-15s %2d\n", "float:", sizeof(float));
    printf("%-15s %2d\n", "double:", sizeof(double));
    printf("%-15s %2d\n", "long double:", sizeof(long double));
}