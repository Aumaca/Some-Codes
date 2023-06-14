#include <stdio.h>

int main() {
    float biggest, smallest, average = 0;
    int valuesNumber;
    printf("How many values?: ");
    scanf("%i", &valuesNumber);

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