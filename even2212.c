#include <stdio.h>

int main() {

	int i = 2;
	
	while (i <= 12) {
		if(~(i&1)) {
			printf("%d is an even number.\n", i);
		}
		i++;
	}
	
return 0;
}
