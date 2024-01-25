#include <stdio.h>

int main() {

	int i,c,  num[50];
	float avg, tot;

	printf("Enter total numbers you want to input: ");
	scanf("%d", &c);

	for (i = 1; i<=c; i++) {
		printf("Enter number %d: ",i );
		scanf("%d", &num[i]);

	}

	for (i = 1; i<=c; i++) {
		tot += num[i];

	}

	avg = tot /c;

	printf("the average: %.2f", avg);

return 0;
}
