//18. Write a program to swap two numbers defining a function swap( )
#include<stdio.h>

void swap(int *a, int *b) {
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

int main()
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    printf("Before swap\na:%d\tb:%d\n", a, b);
    swap(&a, &b);
    printf("After swap\na:%d\tb:%d\n", a, b);

    return 0;
}
