#include <stdio.h>
#define pi 3.121492654

float area (float);

int main (void){

	float r, ar;
	printf("Enter the radius: ");
	scanf("%f", &r);

	ar = area(r);
	printf("%f\n",ar );

return 0;
}

float area (float r) {
	return pi*r*r;
}