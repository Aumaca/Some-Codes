#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    int middle = n / 2 + 1;
    int padding = middle - 1;

    for (int i = 1; i <= n; i += 2) {
      for (int j = 0; j < padding; j++) {
        printf(" ");
      }
      for (int j = 0; j < i; j++)
        printf("*");

      printf("\n");
      padding--;
    }
    
    padding = middle - 1;
    for (int i = 1; i <= 3; i += 2) {
      for (int j = 0; j < padding; j++) {
        printf(" ");
      }
      for (int j = 0; j < i; j++)
        printf("*");
        
      printf("\n");
      padding--;
    }

    printf("\n");
  }

  return 0;
}