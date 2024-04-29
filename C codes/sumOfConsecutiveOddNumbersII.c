#include <stdio.h>

int main() {
  int n;
  int sum = 0;
  scanf("%d", &n);

  for (; n > 0; n--) {
    int a, b;
    sum = 0;
    scanf("%d %d", &a, &b);

    int biggest = (a >= b) ? a : b;
    int smallest = (a >= b) ? b : a;
    for (int i = smallest+1; i < biggest; i++) {
      if (i % 2 == 1)
        sum += i;
    }
    printf("%d\n", sum);
  }

  
  return 0;
}