#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"

void main()
{
    printf("Enter the length of the array: ");
    int arr_len;
    int upper = 100000, lower = 0;
    scanf("%d", &arr_len);
    int arr[arr_len];
     for (int i = 0; i < arr_len; i++) {
        arr[i] = (rand() % (upper - lower + 1)) + lower;
    }
    clock_t t;

    // bubble sort
    t = clock();
    bubble_sort(arr, arr_len);
    t = clock() - t;
    double time_taken_bubble = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\n\nbubble_sort()  took %f seconds to execute \n", time_taken_bubble);

    // selection sort
    t = clock();
    selection_sort(arr, arr_len);
    t = clock() - t;
    double time_taken_selection = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nselection_sort() took %f seconds to execute \n", time_taken_selection);

    // insertion sort
    t = clock();
    insertion_sort(arr, arr_len);
    t = clock() - t;
    double time_taken_insertion = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\ninsertion_sort() took %f seconds to execute \n", time_taken_insertion);

     // merge sort
    t = clock();
    merge_sort(arr, 0, arr_len);
    t = clock() - t;
    double time_taken_merge = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nmerge_sort() took %f seconds to execute \n", time_taken_merge);

    // quick sort
    t = clock();
    quick_sort(arr, 0, arr_len);
    t = clock() - t;
    double time_taken_quick = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n\nquick_sort() took %f seconds to execute \n", time_taken_quick);
}

