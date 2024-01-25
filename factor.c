#include <stdio.h>
#include <math.h>

int main() {
    
    int num, c, sq, i = 1;

    printf("Enter a number till which you want to print the factor(s): ");
    scanf("%d", &num);
    
    sq = sqrt(num); 

    while (i <= sq) {
        c = num % i;
        if (c == 0) {
            printf("%d\t%d\t", i, num/i);
        }
        i++;
    }

    return 0;
}
