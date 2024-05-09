#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    
    while (n) {
        char string[1001];
        int diamantes, cont;
        diamantes = cont = 0;
        
        fgets(string, 1001, stdin);
        for (int i = 0; string[i] != '\0'; i++) {
            if (string[i] == '<') {
                cont++;
            }
            else if (string[i] == '>' && cont > 0) {
                cont--;
                diamantes++;
            }
        }
        
        printf("%d\n", diamantes);
        
        n--;
    }

    return 0;
}