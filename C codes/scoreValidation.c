#include <stdio.h>

int main() {
  float nota, media = 0;
  int contador = 0;

  while (contador < 2) {
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10) {
      media += nota;
      contador++;
    } else {
      printf("nota invalida\n");
    }
  }

  printf("media = %.2f\n", media / 2);

  return 0;
}
