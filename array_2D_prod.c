
#include <stdio.h>

int main(){
	int mat1[3][2], mat2[2][3], prod [3][3];
	int i, j, k;

printf("Matrix1\n");
	for (i = 0; i < 3; i++) {
		printf("For row: %d\n",i );
		for (j = 0; j<2; j++) {
			printf("for col: %d\n", j);
			scanf("%d", &mat1[i][j]);	
		}
	}

printf("Matrix2:\n");
	for (i = 0; i < 2; i++) {
			printf("For row: %d\n",i );
			for (j = 0; j<3; j++) {
				printf("for col: %d\n", j);
				scanf("%d", &mat2[i][j]);	
			}
		}
	

	for (i = 0; i < 3; i++) {
			printf("For row: %d and ",i );
			for (j = 0; j<3; j++) {
				prod[i][j] = 0;
				for (k = 0; k<2; k++) {
					prod [i][j] += mat1[i][k] * mat2[i][k];
				}	
			}
		}

	for (i = 0; i < 3; i++) {
			
			for (j = 0; j<3; j++) {
				printf("for row, col: %d*%d\t",i, j);
				printf("prod: \t%d\n", prod[i][j]);	
			}
		}


return 0;

}
