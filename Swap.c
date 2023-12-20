#include <stdio.h>

int main() {

	int a, b;
	
	printf("Enter your numbers(a b)\t: ");
	scanf("%d %d",&a, &b );
	
	printf("The numbers: %d, %d\t", a, b);  
	//Method 1
	a = a+b;
	b = a-b;
	a = a-b;

	 printf("\nAfter Swap: %d, %d\t", a, b);
	//Method 2
	a = a*b;
	b = a/b;
	a = a/b;

	printf("\nThe numbers after another swap: %d, %d", a, b);	
	

return 0;

}
