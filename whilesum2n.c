#include <stdio.h>

int main() {

	int n, i =1, sum;

	printf("Enter up to which you want to sum:");
	scanf("%d", &n);

	while(i <= n) {
		sum +=i;
		i++;
	}

	printf("The sum is: %d", sum);
return 0;
}
