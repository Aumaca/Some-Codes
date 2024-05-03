#include <stdio.h>
#include <string.h>

// Same sequence in natural or reverse are the funniest ones
// 50 chars
// Check both sequences

int main() {
  char string[51];
  char seq1[51] = {0};
  char seq2[51] = {0};
  scanf("%s", string);

  int seqCounter = 0;
  // Seq1
  for (int i = 0; string[i] != '\0'; i++) {
    if (
      string[i] == 'a' ||
      string[i] == 'e' || 
      string[i] == 'i' || 
      string[i] == 'o' || 
      string[i] == 'u'
    ) {
      seq1[seqCounter] = string[i];
      seqCounter++;
    }
  }

  // Seq2
  seqCounter = 0;
  int end = strlen(string) - 1;
  for (int i = end; i >= 0; i--) {
    if (
      string[i] == 'a' ||
      string[i] == 'e' || 
      string[i] == 'i' || 
      string[i] == 'o' || 
      string[i] == 'u'
    ) {
      seq2[seqCounter] = string[i];
      seqCounter++;
    }
  }

  int isFunny = 1;
  for (int i = 0; i < seqCounter; i++) {
    if (seq1[i] != seq2[i]) {
      isFunny = 0;
      break;
    }
  }

  if (isFunny)
    printf("S\n");
  else
    printf("N\n");

  return 0;
}