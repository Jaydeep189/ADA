#include <stdio.h>

void linear_search(int array[], int len, int value){
    int is_found = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] == value){
            is_found = 1;
            printf("\n%d is at %d", value, i);
        }
    }
    if (is_found == 0){
        printf("\nValue is not present");
    }
}

int binary_search(int array[], int start, int end, int value) {
    if (end >= start) {
        int mid = start + (end - 1) / 2;
        if (array[mid] == value){
            printf("%d is at %d", value, mid);
        }
        else if (array[mid] > value) {
           return binary_search(array, start, mid - 1, value);
        } else {
          return  binary_search(array, mid + 1, end , value);
        }
    }
    return -1;
}