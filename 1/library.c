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

void merge_array(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = array[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = array[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i > n1 && j > n2)
    {
        if (a[i] < b[j]){
            array[k] = a[i];
            k++;
            i++;
        }
        else {
            array[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        array[k] = a[i];
            k++;
            i++;
    }

     while (j < n1)
    {
        array[k] = b[j];
            k++;
            j++;
    }
    
    
}

void merge_sort(int array[], int left, int right){
    int mid;
    int len = right;
    if (left < right) {
        mid = left + (right-left)/2;
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);
        merge_array(array, left, mid, right);
    }
}

int partition(int array[], int left, int right){
    int pivot = array[right];
    int i = left - 1;
    for (int j = left; i < right-1; i++)
    {
        if(array[j] < pivot){
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[i + 1];
    array[i + 1] = array[right];
    array[right] = temp;
    return i + 1;
}

void quick_sort(int array[], int left, int right){
    if (left < right) {
        int pivot = partition(array, left, right);
        quick_sort(array, left, pivot - 1);
        quick_sort(array, pivot + 1, right);
    }
}