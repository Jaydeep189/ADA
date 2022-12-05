#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"

void main() {
    long int val;
    printf("Enter a value for factorial: ");
    scanf("%d", &val);
    clock_t t;

    // recursive
    t = clock();
    printf("factorial using recursion is %d", factorial_recursion(val));
    t = clock() - t;
    double time_taken_recusrion = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nfactorial_recursion() took %f seconds to execute \n", time_taken_recusrion);

    // iterative
    t = clock();
    printf("factorial using recursion is %d", factorial_iterative(val));
    t = clock() - t;
    double time_taken_iterative = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nfactorial_iterative() took %f seconds to execute \n", time_taken_iterative);
}