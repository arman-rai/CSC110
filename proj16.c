
/*
16. Write a program that takes input of two numbers and any one operator in(+,-,*,/ ,%) as
input and pass those numbers and an operator to the function. The function should
calculate the result of two numbers as indicated by operator and return the result . Display
the result of computation in your program.
*/

#include <stdio.h>

// Function to perform arithmetic operations based on the operator
double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        case '%':
            if (num2 != 0) {
                return (int)num1 % (int)num2; // Typecasting to int for modulus operation
            } else {
                printf("Error: Modulus by zero!\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }
}

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);
    printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}
