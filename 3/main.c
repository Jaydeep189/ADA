#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void main(){
    printf("Enter the length of the array: ");
    int arr_len;
    int upper = 100000, lower = 0;
    scanf("%d", &arr_len);
    int arr[arr_len];
     for (int i = 0; i < arr_len; i++) {
        arr[i] = (rand() % (upper - lower + 1)) + lower;
    }
    heap_sort(arr, arr_len);
}