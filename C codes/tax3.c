#include <stdio.h>

// https://www.beecrowd.com.br/judge/en/problems/view/1051

int main()
{
    double salary, tax = 0;
    scanf("%lf", &salary);
    
    if (salary > 4500) {
        double toTax = salary - 4500;
        tax += toTax * 0.28;
    }
    if (salary > 3000) {
        double toTax = salary - 3000.01;
        if (toTax > 1500)
            toTax = 1500;
        tax += toTax * 0.18;
    }
    if (salary > 2000) {
        double toTax = salary - 2000.01;
        if (toTax > 1000)
            toTax = 1000;
        tax += toTax * 0.08;
    }
    
    if (tax == 0)
        printf("Isento\n");
    else 
        printf("R$ %.2lf\n", tax);
        

    return 0;
}
