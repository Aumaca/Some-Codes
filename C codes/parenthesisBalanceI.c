#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char op[1001];
    while (fgets(op, 1001, stdin)) {
        int cO = 0;
        int cC = 0;
        for (int i = 0; op[i] != '\0'; i++) {
            if (op[i] == '(')
                cO++;
            else if (op[i] == ')')
                cC++;
                
            if (cC > cO)
                break;
        }
        
        if (cO == cC)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}