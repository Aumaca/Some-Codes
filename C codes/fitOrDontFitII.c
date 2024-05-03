#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1001

// 1 - ALLOC MEMORY
// 2 - RECEIVE INPUT WITHOUT SPACE
// 3 - CHECK IF LEN(A) >= LEN(B)
// 4 - READ STRING IN BACKWARDS AND LOOP EACH CHAR

int main() {
  int n;
  scanf("%d", &n);
  getchar();
  while (n > 0) {
    char *a = (char *)malloc(MAX_LENGTH * sizeof(char));
    char *b = (char *)malloc(MAX_LENGTH * sizeof(char));

    scanf("%s %s", a, b);

    int a_length = strlen(a);
    int b_length = strlen(b);

    int fits = 1;
    if (a_length < b_length) {
      fits = 0;
    } else {
      int bCounter = b_length - 1;
      int aCounter = a_length - 1;
      while (bCounter >= 0) {
        if (a[aCounter] != b[bCounter]) {
          fits = 0;
          break;
        }
        bCounter--;
        aCounter--;
      }
    }

    if (fits)
      printf("encaixa\n");
    else
      printf("nao encaixa\n");

    n--;
  }
  return 0;
}
