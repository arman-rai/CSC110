#include <stdio.h>
#define pi 3.141592654
int main() {

	float  r, a, v;

	printf("Enter the radius of the sphere: ");
	scanf("%f", &r);

	a = 4 *pi *r *r;
	v = (4/3) *pi *r *r *r;

	printf("The Surface Area: %f\nThe Volume: %f", a, v);

return 0;
}
 
