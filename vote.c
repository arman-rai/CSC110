#include <stdio.h>

int main() {

	int age, year;

	printf("Enter your age:");
	scanf("%d", &age);
	year = 18 - age;

	if(age >= 18) {
		printf("You can vote.");
	}
	else if(age < 18) { 
		printf("Come back after %d year(s) to vote.", year);
	}
	else 
		return 1;
return 0;
}
