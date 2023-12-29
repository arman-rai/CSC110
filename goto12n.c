#include <stdio.h>

int main() {

	int i = 0, n;

	printf("Enter to which number you want to print from 1: ");
	scanf("%d", &n);

	// using only if and goto

	next:
		i++;
	if(i<=n) {
		printf("%d\t", i);
		goto next;
	}

return 0;
}
