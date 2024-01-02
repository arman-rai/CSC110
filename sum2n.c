#include <stdio.h>

int main() {

	int sum = 0, i, n = 0;
	
	printf("Enter up to which you want to sum to:");
	scanf("%d", &n);

	next:
	if(i<=n ) {
		sum += 1;
		i++;
		goto next;
	}

printf("%d is the sum.", sum);
return 0;

}
