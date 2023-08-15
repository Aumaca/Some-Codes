#include <stdio.h>

// I was curious about the gaps between prime numbers.
// So I decided to create a algorithm to check the growth of the gaps.
// I managed the arrays towards not initializing and consequently be filled with garbage values.
// Therefore I used variables to keep track of insertions to array.
// The logic to check prime numbers is not efficient, but for now is enough. I will look more about it.
// In a range of 100.000 numbers, the biggest gap is 72, between the values 31469 and 31397.

int main() {
    int length = 100000;
    int primes[length];
    int gaps[length];
    int lastPrime = 0;
    int primesLength = 0;
    int gapsLength = 0;
    int biggestGap = 0;
    int biggestGapNum1 = 0;
    int biggestGapNum2 = 0;

    for (int i = 2; i < length; i++) {
        int number = i;
        int isPrime = 1;

        for (int j = 2; j <= number; j++) {
            if (number % j == 0 && j != number) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            primesLength++;
            int primesIndex = primesLength - 1;
            primes[primesIndex] = number;

            if (lastPrime != 0) {
                gapsLength++;
                int gap = number - lastPrime;
                int gapsIndex = gapsLength - 1;
                gaps[gapsIndex] = gap;
                if (gap > biggestGap) {
                    biggestGap = gap;
                    biggestGapNum1 = number;
                    biggestGapNum2 = lastPrime;
                }
            }

            lastPrime = number;
        }
    }

    printf("\nPrime numbers: ");
    for (int i = 0; i < primesLength; i++) {
        printf("%d ", primes[i]);
        if (primes[i + 1] == 0) {
            break;
        }
    }

    printf("\n\nGaps: ");
    for (int i = 0; i < gapsLength; i++) {
        printf("%d ", gaps[i]);
        if (gaps[i + 1] == 0) {
            break;
        }
    }

    printf("\n\nThe biggest gap is %d, between the values %d and %d", biggestGap, biggestGapNum1, biggestGapNum2);

    return 0;
}
