#include <stdio.h>

// https://www.beecrowd.com.br/judge/en/problems/view/2140

int main() {
    int price = 1, paid = 1;
    int bills[6] = {100, 50, 20, 10, 5, 2};
    while (!(price == 0 && price == paid)) {
        scanf("%d %d", &price, &paid);

        if (price != 0 && paid != 0) {
            int toChange = paid - price;
            int isPossible = 0;
    
            for (int i = 0; i < 6; i++) {
                int newToChange = toChange - bills[i];
                for (int j = i; j < 6; j++) {
                    if (newToChange - bills[j] == 0 && bills[i] != bills[j])
                        isPossible = 1;
                }
            }
    
            if (isPossible)
                printf("possible\n");
            else
                printf("impossible\n");
        }
    }

    return 0;
}