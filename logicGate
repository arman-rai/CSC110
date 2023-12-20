#include <stdbool.h>
#include <stdio.h>

int main() {

    bool x[8], y[8] = {0, 0, 0, 0, 1, 1, 1, 1}, z[8];
    bool result[8], result1[8], result2[8], result3[8];
    int i, c;

    // Initialize x array
    for (i = 0; i < 8; i++) {
        x[i] = (i % 2 == 0) ? 0 : 1;
    }

    // Initialize z array
    for (i = 0; i < 8; i++) {
        z[i] = (i % 4 < 2) ? 0 : 1;
    }

    // Finding out the x.y.z, x.y|.z, x.z|, x.y.z|
    printf("X\tY\tZ\tX.Y.Z\tX.Y|.Z\tX.Z|\tX.Y.Z|\n");
    for (c = 0; c < 8; c++) {
        result[c] = x[c] & y[c] & z[c];
        result1[c] = x[c] & ~y[c] & z[c];
        result2[c] = x[c] & ~z[c];
        result3[c] = x[c] & y[c] & ~z[c];
         printf("%d\t%d\t%d\t", x[c], y[c], z[c]);
        printf("%d\t%d\t%d\t%d\n", result[c], result1[c], result2[c], result3[c] >
    }

    return 0;
}
