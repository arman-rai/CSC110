#include <stdio.h>

void yInvertedUpperTriangular(void) {
    int i, j, k;
    int row = 4;

    for (i = 0; i < row; i++) {
        for (j = 0; j < row - i - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("\n");
    }
}

void xInvertedUpperTriangular(void) {
    int i, j;
    int row = 4;

    for (i = 0; i < row; i++) {
        for (j = 0; j < row - i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main(void) {
    yInvertedUpperTriangular();
    xInvertedUpperTriangular();

    return 0;
}
