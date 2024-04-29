#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  while (n != 0) {
    float a, b, c, result;
    scanf("%f %f %f", &a, &b, &c);

    result = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("%.1f\n", result);

    n--;
  }

  return 0;
}