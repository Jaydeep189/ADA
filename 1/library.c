#include <stdio.h>

void bubble_sort(int array[], int len) {
   
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (array[j] < array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selection_sort(int array[], int len) {
    for (int j = 0; j < len; j++){
        int max = j;
        for (int i = 0; i < len; i++)
        {
            if (array[i] > array[max]) {
                max = i;
            }
            if (max != j){
                int temp = array[max];
                array[max] = array[j];
                array[j] = temp;
            }
        }  
    } 
}

void insertion_sort(int array[], int len) {
    for (int i = 1; i < len; i++)
    {
        int j = 1;
        while (j > 0 && array[j-1] > array[j])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
}