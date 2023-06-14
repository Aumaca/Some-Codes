#include <stdio.h>  // scanf and printf
#include <stdlib.h> // malloc and free

void main() {
    int size = 0;
    printf("Number of values: ");
    do {
        scanf("%d", &size);
    } while (size <= 0);

    // malloc() allocate enough size for integers,
    // and return a void pointer, that points to the beginning of the memory block allocated.
    // The (int *) indicate to compiler consider as an integer array.
    // The "int *array" indicates that the variable is an integer pointer.
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Number %i: ", i + 1);
        scanf("%d", &array[i]);
    }

    // bubble sort
    int hasChanged = 1;
    while (hasChanged == 1) {
        hasChanged = 0;
        for (int i = 0; i + 1 < size; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                hasChanged = 1;
            }
        }
    }

    printf("Numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%i ", array[i]);
    }

    free(array);
}