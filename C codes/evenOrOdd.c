#include <stdio.h>

int main() {
  int inputs;
  scanf("%d", &inputs);

  while (inputs > 0) {
    int n;
    scanf("%d", &n);
    if (n == 0)
      printf("NULL\n");
    else if (n % 2 == 0)
      printf("%s\n", (n > 0) ? "EVEN POSITIVE" : "EVEN NEGATIVE");
    else
      printf("%s\n", (n > 0) ? "ODD POSITIVE" : "ODD NEGATIVE");
    inputs--;
  }

  return 0;
}