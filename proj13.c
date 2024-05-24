// 13. Write a program using loop to print the following floyd's triangle as given below when
// input is n.

#include <stdio.h>

int main() {
    int n, num = 1, row, col;

    printf("Enter the number of rows for Floyd's triangle: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
