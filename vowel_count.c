// finding number of vowels

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char words[30];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    printf("Enter a string:\t");
    scanf("%s", words);

    //lowercasing
    for (int i = 0; words[i]; i++) {
        words[i] = tolower(words[i]);
    }

    //Counting
    for (int i = 0; words[i]; i++) {
        for (int j = 0; j < 5; j++) {
            if (words[i] == vowels[j]) {
                count++;
                printf("%c\t", words[i]);
                break;
            }
        }
    }

    printf("\nNumber of vowels in the string: %d\n", count);

    return 0;
}
