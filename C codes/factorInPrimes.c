#include <stdbool.h>
#include <stdio.h>

bool isPrime(int number);

int main() {
    int num = 1763;
    int x1 = 0;
    int x2 = 0;
    
    for (int i1 = 2; i1 < num; i1++) {
        if (isPrime(i1) == true) {
            for (int i2 = 2; i2 < num; i2++) {
                if (isPrime(i2) == true) {
                    int result = i1 * i2;
                    if (result == num) {
                        x1 = i1;
                        x2 = i2;
                    }
                }
            }
        }
    }

    printf("\nx1: %d", x1);
    printf("\nx2: %d", x2);

    return 0;
}

bool isPrime(int number) {
    // Loop each number
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
