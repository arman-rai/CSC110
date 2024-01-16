#include <stdio.h>

int main() {
	float gpa;

	printf("Enter your GPA: ");
	scanf("%f",&gpa );

	if(gpa>=3.6 && gpa <= 4.0) {
		printf("A+");
	}
	else if(gpa>=3.2 && gpa< 3.6) {
		printf("A");
	}
	else if(gpa>=2.8 && gpa<3.6) {
		printf("B+");
	}
	else if(gpa>=2.0 && gpa<3.6) {
		printf("B");
	}
	else {
		printf("Invalid");
	}

return 0;
}
