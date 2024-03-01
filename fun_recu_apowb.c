#include <stdio.h>
#include <math.h>
 int power(int , int)
{
	if (b == 0)
		return 1;
	else
		return a* power(a, b-1);
}

void main()
{

	int a, b, c;
	printf("Enter the radix and base: \n");
	scanf("%f %f", &a, &b);

	c = power(a, abs(b));
	
	if (b<0)
		printf("Ans: %d\n", 1/c);
	else
		printf("Pow: %d\n", c);
}