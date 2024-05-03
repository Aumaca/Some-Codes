#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int n;
  scanf("%d", &n);

  while (n > 0) {
    char string[101];
    scanf("%s", string);

    int end = strlen(string) - 1;
    while (end >= 0) {
      if (islower(string[end]))
        printf("%c", string[end]);
      end--;
    }
    printf("\n");

    n--;
  }
  
  return 0;
}