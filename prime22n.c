#include <stdio.h>
// #include <math.h>

int main() {

	int num, i, j, flag, sq;
	
	printf("Enter your number: ");
	scanf("%d", &num);

	for (i = 2; i<= num; i++) {
		flag = 1;

		for (j = 2; j*j<=i; j++) {
			if (i % j ==0) {
				flag = 0;
				break;
			}
		/*	if(j*j > i) {
					break;
					}
		*/	
		}
			if (flag == 1) {
				printf("%d\t", i);
			}

		
	}
	
return 0;
}
