#include <stdio.h>

int main() {

	int i, j, row = 5;

	for (i = 0; i<row; i++) {
		for (j = 0; j<i+1; j++) {
		       printf(" ");
		       }
 		printf("*\n");
	}

return 0;	
}	
