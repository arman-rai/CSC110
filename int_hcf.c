// calculate the gcd(greatest common divider) or hcf of the two integers
#include <stdio.h>


int gcd(int, int);
int main (void) {

	int x, y, ans;
	printf("Enter two numbers: \n");
	scanf("%d %d", &x, &y);

	ans = gcd(x, y);
	printf("%d", ans);

}

int gcd(int x, int y) {

	/*if (x < y) {
		x +=y;
		y -=x;
		x -=y;
	}*/
	int temp, rem;
	if (y >x) {
		temp = x;
		x = y;
		y = temp;
	}

	rem = x % y;
	while (rem != 0) {
		x = y;
		y = rem;
		rem = x %y;
	}
	return y;
}