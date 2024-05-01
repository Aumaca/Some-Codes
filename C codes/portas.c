// Desafio PROBLEMA A, Portas
// Introdução a competições de programação de computadores
// Meu tempo de conclusão: 21m27s (HORRIVEL)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, n;
  scanf("%d %d", &a, &n);

  while (a && n) {
    int *portas = (int*)malloc((a) * sizeof(int));

    // fechando todas as portas
    for (int i = 0; i < a; i++)
      portas[i] = 0;

    // recebe numeros
    for (int i = 0; i < n; i++) {
      int num;
      scanf("%d", &num);

      // inverte porta do andar
      for (int j = 0; j < a; j++) {
        if ((j + 1) % num == 0)
          portas[j] = ~portas[j];
      }
    }

    for (int i = 0; i < a; i++) {
      printf("%c", (portas[i]) ? 'O' : 'C');
    }
    printf("\n");
    scanf("%d %d", &a, &n);
  }

  return 0;
}


// * Inicializar portas fechadas 
// * 1 ap por andar 
// 1 - Escolher peao
// 2 - Definir numero
// 3 - Passar andares multiplos desse numero e inverter portas 
// 
// SE quando o grupo desejar, o peão estiver muito cansado, ou
// algum morador reclamar
//  - todos menos peao são questionados do estado de cada porta (baixo para cima)
//  - Se acertar, não vira peao o dia inteiro 
// 
// 
// > input de n casos 
//  > A N, numero de andares e quant de inputs dos participantes
// > ultimo caso é '0 0'

