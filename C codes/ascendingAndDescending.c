#include <stdio.h>

int main() {
  while (1) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
      printf("Decrescente\n");
    else if (a < b)
      printf("Crescente\n");
    else
      return 0;
  }
}