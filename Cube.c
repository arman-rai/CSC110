#include <stdio.h>

int main() {

	int l, TSA, V;
	
	printf("Enter the length of the cube:\t");
	scanf("%d", &l);
	
	TSA = 6* l*l;
	V = l*l*l;
	printf("The TSA is : %d\n The volume is: %d\n", TSA, V);

return 0;	
}

