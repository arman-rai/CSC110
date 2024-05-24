//20. Write a program to prompt user to input filename and read the content of file and display
//in screen.

#include <stdio.h>
int main()
{
    FILE *file;
    char ch, filename[20];

    printf("Enter the filename to read: ");
    scanf("%s", filename);
    file = fopen(filename, "r");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}

