#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char matrix[5][83];
  char firstKey[5];
  char secondKey[5];

  for (int i = 0; i < 4; i++)
    scanf("%s", matrix[i]);

  int len = strlen(matrix[0]);
  for (int i = 0; i < 4; i++) {
    firstKey[i] = matrix[i][0];
    secondKey[i] = matrix[i][len-1];
  }

  // Decode chars
  for (int col = 1; col < len - 1; col++) {
    char currChars[5];  
    for (int row = 0; row < 4; row++)
      currChars[row] = matrix[row][col];
    char decodedChar = (atoi(firstKey) * atoi(currChars) + atoi(secondKey)) % 257;
    printf("%c", decodedChar);
  }

  printf("\n");

  return 0;
}