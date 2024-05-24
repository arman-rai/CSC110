//22. Write a program to read a text file and copy all contents in the new file.
#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;

    sourceFile = fopen("student.txt", "r");
    targetFile = fopen("target.txt", "w");

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("done.\n");

    return 0;
}
