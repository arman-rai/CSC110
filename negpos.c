#include <stdio.h>

int main(){

	int  a;

	printf("Enter your number: ");
	scanf("%d", &a);

	if (a>0) {
		if(a & 1) {
			printf("%d is a even positive number.", a);
		}
		else {
			printf("%d is a positive odd number.", a);
		}
	}
	else if (a<0) {
		if (a % 2 == 0) {
			printf("%d is a negative even number.", a);
		}
		else
		printf("%d is a negative odd number.", a);
	}
	else {
		printf("%d is 0 and even.", a);
	}

return 0;
}
