#include <stdio.h>

int main() {

	int celci, fahren;
	
	printf("Enter the temperature in celsius: ");
	scanf("%d", &celci);

	fahren = (celci * 9/5) + 32 ;
	
	printf("The temperature in fahrenheit is: %d", fahren);

return 0;
}
