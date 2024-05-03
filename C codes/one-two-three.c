#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// one and two
// on, oe, ne
// tw, to, wo

int main() {
  int n;
  scanf("%d", &n);

  while (n > 0) {
    char string[6];
    scanf("%s", string);

    if (strlen(string) == 5) {
      printf("3\n");
      n--;
      continue;
    }

    char sOne[4] = "one";
    char sTwo[4] = "two";
    int nOne, nTwo;
    nOne = nTwo = 0;
    for (int i = 0; string[i] != '\0'; i++) {
      if (sOne[i] == string[i])
        nOne++;
      if (sTwo[i] == string[i])
        nTwo++;
    }

    if (nOne > nTwo)
      printf("1\n");
    else
      printf("2\n");

    n--;
  }
}