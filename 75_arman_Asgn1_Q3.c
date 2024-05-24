#include <stdio.h>

int main() {
    int isbn[10], sum = 0, checksum;

    // Input ISBN number
    printf("Enter first 9 digits of ISBN number(): ");
    for (int i = 0; i < 9; i++) {
        scanf("%1d", &isbn[i]);
    }

    // Checksum calculation
    for (int i = 0; i < 9; i++) {
        sum += (i + 1) * isbn[i];
    }
    checksum = sum % 11;

    printf("Formatted 10 digit ISBN number: %d-%d%d%d-%d%d%d%d%d-", 
           isbn[0], isbn[1], isbn[2], isbn[3], 
           isbn[4], isbn[5], isbn[6], isbn[7], isbn[8]);

    // Display the checksum
    if (checksum == 10) {
        printf("X\n");
    } else {
        printf("%d\n", checksum);
    }

    return 0;
}
