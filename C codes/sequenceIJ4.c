#include <stdio.h>

int main() {
  double i = 0;
  double j = 1;

  while (i <= 2.1) {
    for (int counter = 0; counter < 3; counter++) {
      double deci = fmodf(i, 1.0f);
      double decj = fmodf(j, 1.0f);
      if (deci == 0 && decj == 0)
        printf("I=%.0f J=%.0f\n", i, j + counter);
      else if (deci == 0)
        printf("I=%.0f J=%.1f\n", i, j + counter);
      else if (decj == 0)
        printf("I=%.1f J=%.0f\n", i, j + counter);
      else
        printf("I=%.1f J=%.1f\n", i, j + counter);
    }
    j += 0.2;
    i += 0.2;
  }
  
  return 0;
}