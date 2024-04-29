#include <stdio.h>

int main() {
  int i = 1;
  int j = 7;

  while (i <= 9) {
    for (int counter = 0; counter < 3; counter++) {
      printf("I=%d J=%d\n", i, j - counter);
    }
    j += 2;
    i += 2;
  }
  
  return 0;
}