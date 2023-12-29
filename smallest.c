#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter 3 real numbers simultaneously: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && b > c) {
        printf("Maximum: %f\n", a);
    } else if (b > a && a > c) {
        printf("Maximum: %f\n", b);
    } else if (c > b && c > a) {
        printf("Maximum: %f\n", c);
    } else {
        printf("Invalid\n");
    }

    return 0;
}

