#include <stdio.h>
#include <limits.h>

int main (void) {
    unsigned int x = UINT_MAX;

    printf("x : %u\n", x);
    x += 1;
    printf("x : %u\n", x);
    printf("x : 0x%08x\n", x);
    x = x + 1;
    printf("x : 0x%08x\n", x);

    

}