#include <stdio.h>

int main() {
    int num, sum, digitsAdded;
    sum = digitsAdded = 0;
    printf("Number: ");
    scanf("%d", &num);
    while (num != 0) {
        digitsAdded++;
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("Digits added: %i", digitsAdded);
    printf("\nSum: %i", sum);
}