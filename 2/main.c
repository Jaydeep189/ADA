#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "library.h"

void main() {
    printf("Enter the length of the array: ");
    int len;
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        arr[i] = i;
    }
    printf("\nThe Generated Array\n");
    for (int i = 0; i < len; i++) {
        printf("- %d ", arr[i]);
    }
    int val;
    printf("\n Enter a value to search: ");
    scanf("%d", &val);
    clock_t t;

    // by linear serach
    t = clock();
    linear_search(arr, len, val);
    t = clock() - t;
    double time_taken_linear_search = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nlinear_search() took %f seconds to execute \n", time_taken_linear_search);

    // by binary search
    t = clock();
    binary_search(arr, 0, len, val);
    t = clock() - t;
    double time_taken_binary_search = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nbinary_search() took %f seconds to execute \n", time_taken_binary_search);
}