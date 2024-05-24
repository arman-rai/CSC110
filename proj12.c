// Write a program in C to make such a pattern of asterisk(*) below using loop.

#include<stdio.h>

void pattern1(int n) {
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter number of lines to print:");
    scanf("%d", &n);

    pattern1(n);
    pattern2(n);

    return 0;
}
