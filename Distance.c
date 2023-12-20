#include <stdio.h>

int main() {

	float v, t, a, s;

	printf("Enter the velocity, time and acceleration in SI units:\n");
	scanf("%f %f %f", &v, &t, &a);
	
	s = v*t + .5 *a *t*t;
	printf("The distance covered: %f", s); 
	
	return 0;

}
