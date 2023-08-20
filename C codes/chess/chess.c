#include <stdio.h>
#include <stdlib.h>

int main() {
    int chessboard[8][8];

    // empty - 0
    // pawn - 1
    // rook - 2
    // horse - 3
    // bishop - 4
    // king - 5
    // queen - 6
    int pieces[7] = {0, 0, 0, 0, 0, 0, 0};

    // Input
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            scanf("%d", &chessboard[row][col]);
            pieces[chessboard[row][col]]++;
        }
    }

    for (int piece = 0; piece < 7; piece++) {
        printf("\nPiece %d = %d", piece, pieces[piece]);
    }

    return 0;
}
