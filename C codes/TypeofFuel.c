#include <stdio.h>

int main() {
  int alcool, gasolina, diesel, escolha;
  alcool = gasolina = diesel = 0;

  while (scanf("%d", &escolha) != EOF && escolha != 4) {
    if (escolha == 1)
      alcool++;
    else if (escolha == 2)
      gasolina++;
    else if (escolha == 3)
      diesel++;
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);
}