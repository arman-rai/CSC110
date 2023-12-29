#include <stdio.h>

int main() {

	int age;

	printf("Enter the age of a student:");
	scanf("%d", &age);

	if(age < 18) {
		printf("You are a teenager. Congrats!");
	}
	else if(age > 18 && age < 100) {
		printf("You are not a teen. Boomer!");
	}
	else  {
		printf("Omae wa mou shindeiru");
	}


return 0;

}
