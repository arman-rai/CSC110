//Write a program to get a string as input and print the length of string, reverse of the string.
//a. Using String Library Function
//b. Using your own function

#include<stdio.h>
#include<string.h>

void lib_fun(char input[]){
    int length = strlen(input);
    strrev(input);

    printf("\nLength of string: %d\nReverse of string: %s\n", length, input);
}

void usr_fun(char input[]) {
    int length = 0;
    int i = 0;

    while (input[i] != '\0') {
        length++;   i++;
    }
    char reverse[length +1];
    int j = length -1;

    for (i = 0; i < length; i++) {
        reverse[i] = input[j];
        j--;
    }
    reverse[length] = '\0';

    printf("\nLength of string: %d\nReverse of string: %s\n", length, reverse);
}
int main () {
    char input[50];

    printf("Enter the input string: ");
    scanf("%s", input);

    usr_fun(input);
    lib_fun(input);

return 0;
}
