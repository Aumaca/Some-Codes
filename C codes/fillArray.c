#include <stdio.h>

// https://www.beecrowd.com.br/judge/en/problems/view/1178

int main() {
    double X, N[100];
    scanf("%lf", &X);

    for (int i = 0; i < 100; i++) {
        N[i] = X;
        X /= 2;
        printf("N[%i] = %.4lf\n", i, X);
    }

    return 0;
}