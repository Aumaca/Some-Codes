#include <stdio.h>

int main() {
    float biggest, smallest, average = 0;
    int valuesNumber;
    printf("How many values?: ");
    scanf("%i", &valuesNumber);

    // Array size should be a constant value, but compiler support variable-length arrays (VLAs);
    // Allocate memory at runtime, consequently have limitations.
    float data[valuesNumber];

    for (int i = 0; i < valuesNumber; i++) {
        printf("Data %i: ", i+1);
        scanf("%f", &data[i]);
        if (i == 0) {
            biggest = data[i];
            smallest = data[i];
        } else if (data[i] > biggest) {
            biggest = data[i];
        } else if (data[i] < smallest) {
            smallest = data[i];
        }
        average = average + data[i];
    }
    average = average / valuesNumber;
    printf("Values: %i", valuesNumber);
    printf("\nBiggest: %.2f", biggest);
    printf("\nSmallest: %.2f", smallest);
    printf("\nAverage: %.2f", average);
    return 0;
}