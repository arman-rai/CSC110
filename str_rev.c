#include <stdio.h>
#include <string.h>

int main(void) {
    char a[] = "hello", rev[10];
    int sz = strlen(a);

    int i = 0;
    while (sz != 0) {
        sz--;
        rev[i] = a[sz];
        i++;
    }

    rev[i] = '\0'; // Null-terminate the reversed string

    printf("%s\n", rev);

    return 0;
}

