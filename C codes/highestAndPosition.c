#include <stdio.h>

int main() {
  int biggest;
  int position = 1;
  int flag = 0;
  for (int i = 1; i <= 100; i++) {
    int n;
    scanf("%d", &n);
    if (flag == 0) {
      biggest = n;
      flag = 1;
      position = i;
    }
    else if (n > biggest) {
      biggest = n;
      position = i;
    }
  }

  printf("%d\n", biggest);
  printf("%d\n", position);

  return 0;
}