#include <stdio.h>

int sum_of_digits(int n) {
	if (n == 0)
		return 0;
	else
		return n%10 + sum_of_digits(n/10);
}

void main() {
	int n, sum;
	printf("Enter any integer: \n");
	scanf("%d", &n);

	sum = sum_of_digits(n);
	printf("Sum of number = %d\n",sum );
}