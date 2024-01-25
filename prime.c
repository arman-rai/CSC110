#include <stdio.h>

int main() {
    
    int num, i = 1, c = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (i <= num) {
        if (num % i == 0) {
            c++;
        }
        i++;
    }
    
    if (c == 2) {
        printf("%d is prime.", num);
    } else {
        printf("%d is composite.", num);
    }

    return 0;
}
