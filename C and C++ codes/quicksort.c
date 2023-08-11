#include <stdio.h>

void swap(int *x, int *y);

void quicksort(int array[], int length);

void quicksort_recursion(int array[], int low, int high);

int partition(int array[], int low, int high);

int main() {
    int array[5] = {3, 1, 2, 5, 4};
    
    quicksort(array, 5);
    
    printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("%d, ", array[i]);
    }
    
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int array[], int length) {
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high) {
    if (low < high) {
        printf("\nActual array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d, ", array[i]);
        }
        printf("and actual low: %d, high: %d", low, high);
        
        int pivot_index = partition(array, low, high);
    
        quicksort_recursion(array, low, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

int partition(int array[], int low, int high) {
    int pivot_value = array[high];
    
    int i = low;
    
    for (int j = low; j < high; j++) {
        if (array[j] < pivot_value) {
            swap(&array[j], &array[i]);
            i++;
        }
    }
    
    swap(&array[high], &array[i]);
    
    return i;
}