//14. Write a program to get input of two 3x3 matrices and find out the sum and product of the
//matrices and display the result of sum and product.
#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3], product[3][3];
    int i, j, k;

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nSum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

