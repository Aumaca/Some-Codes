#include <stdio.h>
#include <ctype.h>

// 1 - Detect first letter
// 2 - Uppercase this first letter
// 3 - Save position of last letter 


int main() {
  char string[51];
  while (fgets(string, 51, stdin)) {
    char *ptr = string;
    int firstLetterIdx = -1;
    int lastLetterIdx = -1;

    for (int i = 0; *ptr != '\0'; i++) {
      if (firstLetterIdx == -1 && isalpha(*ptr)) {
        firstLetterIdx = i;
        *ptr = toupper(*ptr);
        lastLetterIdx = i;
      }
      else if (isalpha(*ptr)) {
        *ptr = (isupper(string[lastLetterIdx])) ? tolower(*ptr) : toupper(*ptr);
        lastLetterIdx = i;
      }
      ptr++;
    }

    printf("%s\n", string);
  }

  return 0;
}

