#include <stdio.h>

int main() {

	int v, t, a, s;

	printf("Enter the velocity, time and acceleration in SI units:\n");
	scanf("%d %d %d", &v, &t, &a);
	
	s = v*t + .5 *a *t*t;
	printf("The distance covered: %d", s); 
	
	return 0;

}
