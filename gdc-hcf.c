#include <stdio.h>

int gcd(int, int);

int main(void) {
    int x, y, ans;
    printf("Enter two numbers(x, y): \n");
    scanf("%d, %d", &x, &y);

    ans = gcd(x, y);
    printf("The GCD of %d and %d is: %d\n", x, y, ans);

    return 0;
}

int gcd(int x, int y) {
    int temp;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
//
//int gcd(int x, int y) {
//    if (y == 0) {
//        return x;
//    } else {
//        return gcd(y, x % y);
//    }
//}

