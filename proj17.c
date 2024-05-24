//17. Write a program defining an array with dynamic memory allocation of integers and
//compute the sum of the array using function of your own.

#include <stdio.h>
#include <stdlib.h>

int arraySum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int *arr, size, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sum = arraySum(arr, size);

    printf("Sum of the array elements = %d\n", sum);
    free(arr);

    return 0;
}
