//21. Write a program to read from a text file and count the number of lines and characters in that file.

#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0, characters = 0;
    file = fopen("student.txt", "r");

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);
    printf("Number of lines in the file: %d\n", lines);
    printf("Number of characters in the file: %d\n", characters);

    return 0;
}
