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
    else if (n % 2 == 0)
      printf("%s\n", (n > 0) ? "EVEN POSITIVE" : "EVEN NEGATIVE");


    if (n > 0) {
      if (n % 2 == 0)
        printf("EVEN POSITIVE\n");
      else
        printf("ODD POSITIVE\n");
    }
    else if (n < 0) {
      if (n % 2 == 0)
        printf("EVEN NEGATIVE\n");
      else
        printf("ODD NEGATIVE\n");
    }
    else {
      printf("NULL\n");
    }
    inputs--;
  }

  return 0;
}