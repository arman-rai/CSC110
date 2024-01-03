#include <stdio.h>

int main() {
	int n, sum = 0, r;

	printf("Enter a number to sum it's digits: ");
	scanf("%d", &n);
	
	while (n !=0) {
		r = n %10;
		sum +=r;
		n /=10;
	}
	
	printf("The sum: %d", sum);
return 0;
}
