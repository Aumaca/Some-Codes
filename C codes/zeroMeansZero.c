#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    unsigned int input1, input2;
    while ((scanf("%u %u", &input1, &input2) == 2) && (input1 != 0 || input2 != 0)) {
        unsigned int soma = input1 + input2;
        char somaString[33];
        sprintf(somaString, "%u", soma);
        for (int i = 0; somaString[i] != '\0'; i++)
            if (somaString[i] != '0')
                printf("%c", somaString[i]);
        printf("\n");
    }
    
    return 0;
}