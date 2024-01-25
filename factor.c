#include <stdio.h>

int main() {
    
    int num, c, i = 1;

    printf("Enter a number till which you want to print the factor(s): ");
    scanf("%d", &num);
    
    c = num; 

    while (i <= c) {
        if (c % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
