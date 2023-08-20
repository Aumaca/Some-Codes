#include <stdio.h>

// Este código utiliza o arquivo "matriz.txt" como input.
// Utiliza no cmd "linhaMatriz < matriz.txt".

int main() {
    int linha;
    char operacao;
    float resultado = 0;
    float matriz[12][12];

    printf("Preenchendo matriz...");

    // Filling with 0
    for (int lin = 0; lin < 12; lin++) {
        for (int col = 0; col < 12; col++) {
            matriz[lin][col] = 0;
        }
    }

    // Getting data from .txt
    for (int lin = 0; lin < 12; lin++) {
        for (int col = 0; col < 12; col++) {
            scanf("%f", &matriz[lin][col]);
        }
    }

    for (int lin = 0; lin < 12; lin++) {
        printf("\nLinha %d: ", lin);
        for (int col = 0; col < 12; col++) {
            printf("%.2f   ", matriz[lin][col]);
        }
    }

    printf("\n\nRecebendo linha...");
    scanf("%d", &linha);

    printf("\nRecebendo operacao Media ou Soma[S/M]...");
    scanf(" %c", &operacao);

    for (int i = 0; i < 12; i++) {
        resultado += matriz[linha][i];
    }

    if (operacao == 'S' || operacao == 's') {
        printf("\nResultado da soma da linha %d = %.2f", linha, resultado);
    } else if (operacao == 'M' || operacao == 'm') {
        resultado = resultado / 12;
        printf("\nResultado da media da linha %d = %.2f", linha, resultado);
    }

    return 0;
}