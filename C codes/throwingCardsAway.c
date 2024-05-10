#include <stdio.h>
#include <stdlib.h>

void push(int n, int *cards) {
  while (*cards != 0) cards++;
  *cards = n;
  return;
}

void pop(int *cards) {
  while (*cards != 0) {
    *cards = *(cards+1);
    cards++;
  }
  return;
}

int arrLength(int *cards) {
  int len = 0;
  while (*cards != 0) {
    cards++;
    len++;
  }
  return len;
}

int main()
{
    int inputs;
    while (scanf("%d", &inputs) != EOF && inputs != 0) {
      int *cards = (int*)malloc(sizeof(int) * inputs + 1);
      int *discarded = (int*)malloc(sizeof(int) * inputs + 1);

      for (int i = 0; i < inputs; i++)
        cards[i] = i+1;

      int aux = 0;
      int isToThrow = 1;
      while (arrLength(cards) > 1) {
        if (isToThrow == 1) {
          discarded[aux++] = cards[0];
          pop(cards);
          isToThrow--;
        }
        else {
          push(cards[0], cards);
          pop(cards);
          isToThrow++;
        }
      }

      printf("Discarded cards: ");
      for (int i = 0; i < inputs; i++) {
        if (discarded[i+1] == 0) {
          printf("%d\n", discarded[i]);
          break;
        }
        else {
          printf("%d, ", discarded[i]);
        }
      }

      printf("Remaining card: %d\n", cards[0]);
    }

    return 0;
}