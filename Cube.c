#include <stdio.h>

int main() {

	float l, TSA, V;
	
	printf("Enter the length of the cube:\t");
	scanf("%f", &l);
	
	TSA = 6* l*l;
	V = l*l*l;
	printf("The TSA is : %f\n The volume is: %f\n", TSA, V);

return 0;	
}

