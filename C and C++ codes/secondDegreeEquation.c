#include <stdio.h>
#include <math.h>

int main()
{
    char cont = 'Y';
    int a, b, c, delta, x1, x2;
    while (cont == 'Y' || cont == 'y')
    {
        printf("a: ");
        scanf("%i", &a);
        printf("b: ");
        scanf("%i", &b);
        printf("c: ");
        scanf("%i", &c);

        delta = b * b - 4 * a * c;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("x1 = %i", x1);
        printf("\nx2 = %i", x2);
        printf("\nContinue? [Y/n]: ");
        scanf(" %c", &cont);
    }

    return 0;
}