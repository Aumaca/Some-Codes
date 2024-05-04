#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n > 0) {
    char string[17];
    int variations = 1;
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
      if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 's')
        variations *= 3; // upper, lower and number
      else if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'S')
        variations *= 3; // upper, lower and number        
      else
        variations *= 2; // upper and lower
    }

    printf("%d\n", variations);

    n--;
  }
  return 0;
}