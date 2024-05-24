#include <stdio.h>

int main() {
    // Declaring arrays for ones and tens places 19 samma cuz "english"
    char ones[][20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char tens[][10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    int num, digit, rem;

    do {
        // Taking input
        printf("Enter a number (0-999999): ");
        scanf("%d", &num);

        if (num > 999999 || num < 0) {
            printf("Invalid input. Please enter a number between 0 and 999999.\n");
        }

    } while (num > 999999 || num < 0);

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    // Handling lakh place
    if (num > 99999) {
        digit = num / 100000;
        num = num % 100000;
        printf("%s Lakh ", ones[digit]);
    }

    // Handling thousand place
    if (num > 999) {
        digit = num / 10000;
        num = num % 10000;
        if (digit != 0)
            printf("%s ", tens[digit]);
        rem = num / 1000;
        printf("%s Thousand ", ones[rem]);
        num = num % 1000;
    }

    // Handling hundredth place
    if (num > 99) {
        digit = num / 100;
        printf("%s Hundred and ", ones[digit]);
        num = num % 100;
    }

    // Handling rightmost remaining 2 digits
    if (num > 19) {
        digit = num / 10;
        rem = num % 10;
        printf("%s %s ", tens[digit], ones[rem]);
    } else {
        printf("%s", ones[num]);
    }

    printf("\n");
    return 0;
}
