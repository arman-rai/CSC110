#include <stdio.h>
int sum(int);

int main() {
	int s, n;
	printf("Enter a num to sum to:\n");
	scanf("%d", &n);
	s = sum(n);
	printf("%d", s);

return 0;
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n+ sum(n-1);
	}
}