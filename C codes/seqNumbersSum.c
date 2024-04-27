#include <stdio.h>

// BEE 1101

int main() {
  while (1) {
    int n, m;
    scanf("%d %d", &n, &m);
    if (n <= 0 || m <= 0)
      break;
    
    int big = (n > m) ? n : m;
    int small = (n > m) ? m : n;
    int currNum = small;
    int sum = 0;
    while (currNum <= big) {
      printf("%d ", currNum);
      sum += currNum;
      currNum++;
    }
    printf("Sum=%d\n", sum);
  }

  return 0;
}