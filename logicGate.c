#include <stdio.h>
#include <stdbool.h>

int main () {

	bool x[8], y[8], z[8], result[8];
	int i, j, k, c;
	for (i=0; i< 8; i++) {
		if (i % 2 == 0) { 
			x[i] = 0;
		}
		else {
			x[i] =1;
		}
	}
	for (j=0; j<8; j++) {
		if (j = 0, j< 4,j++) {
			y[j] = 0;
		}
		else {
			y[j] =1;
		}
	}
	for (k=0; k<8; k++) {
		if (i % 4 < 2) {
			z[k] = 0;
		}
		else {
			z[k] = 1;
		}
	}

		

// finding out the x.y.z, x.y|.z, x.z|, x.y.z|
printf("X\tY\tZ\tX.Y.Z\n");
	for ( c=0; c< 8; c++) {
		result[c] = x[c] & y[c] & z[c];
		printf("%d\t%d\t%d\t%d\n", x[c], y[c], z[c], result[c]);
		
	}

return 0;
}
