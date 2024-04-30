#include <stdio.h>

// unsigned int -> 32bits -> 4bytes

int main() {
  unsigned int a, b;
  while (scanf("%u %u", &a, &b) != EOF) {
    unsigned int result = a ^ b;
    printf("%u\n", result);
  }

  return 0;
}