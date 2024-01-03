#include <stdio.h>

int main() {

	int n, i, rev, r;

	printf("Enter a number to reverse: ");
	scanf("%d", &n);
	
	i = n;
	while (i > 0) {
		r = i % 10;
		rev = (rev *10) + r;
		i /=10;
	}

printf("The reverse is %d", rev);
return 0;
}
