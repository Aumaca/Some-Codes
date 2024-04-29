#include <stdio.h>
#include <stdlib.h>

int tobinaryandgetsequence(int num) {
  char *binary = (char*)malloc(sizeof(char) * 14);
  int idx = 13;
  int sequence = 0;
  int tempSeqCounter = 0;

  while (num > 0) {
    binary[idx] = (num % 2) + '0';
    if (num % 2 == 1) {
      tempSeqCounter += 1;
    }
    else {
      if (tempSeqCounter > sequence) {
        sequence = tempSeqCounter;
        tempSeqCounter = 0;
      }
      else {
        tempSeqCounter = 0;
      }
    }
    num /= 2;
    idx--;
  }

  return sequence;
}

int main() {
  int number = 11;
  int seq = tobinaryandgetsequence(number);
  printf("%d", seq);
  return 0;
}