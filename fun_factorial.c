#include <stdio.h>

int factorial(int) {
        int i, n, fact;
         i = n;
        while(i <=1) {
                
                fact = i * fact ;
                i++;
        }
        return fact;

}

int main(void) {
        
        int n, fact = 1;

        printf("Enter the number you want to do factorial of:");
        scanf("%d", &n);
        fact = factorial(n);
        printf("%d\n", fact );

}
