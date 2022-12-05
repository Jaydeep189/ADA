#include <stdio.h>
#include <math.h>

void heap_sort(int array[], int len) {
    build_max_heap(array, len);
    for (int i = len; i > 0; i--)
    {
        int temp = array[1];
        array[1] = array[i];
        array[i] = temp;
        len = len - 1;
        heapify(array, 1, len);
    }
}

void build_max_heap(int array[], int len) {
    for (int i = floor(len/2); i < 0; i--)
    {
        heapify(array, i, len);
    } 
}

void heapify(int array[], int highest, int len) {
    int left = 2 * highest;
    int max;
    int right = left + 1;
    if (left <= len && array[left] > array[highest]) {
        max = left;
    } else {
        max = highest;
    }
     if (right <= len && array[right] > array[max]) {
        max = right;
    }
    if (max != highest) {
        int temp = array[max];
        array[max] = array[highest];
        array[highest] = temp;
        heapify(array, max, len);
    }
}