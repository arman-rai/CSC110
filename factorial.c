#include <stdio.h>

int main() {
	
	int n, i, fact = 1;

	printf("Enter the number you want to do factorial of:");
	scanf("%d", &n);

	i = n;
	while(i >=1) {
		
		fact = i * fact ;
		i--;
	}
	printf("The factorial: %d", fact);

return 0;
}
