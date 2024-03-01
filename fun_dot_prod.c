
/**
 * #include <stdio.h>

int prod(int k, int i, int j);
int main() {

	printf("Enter the size of vector:\n");
	scanf("%d %d",&a, &b );
for (int k = 0; k < 2; k++)
{
	for(int i = 0; i< a; i++){
		for (int j = 0; j < b; j++)
		{
			printf("Enter for %d %d\n", i, j );
			scanf("%d", &vct[k][i][j]);
		}
	}
}

for (int k = 0; k < 2; k++){
	for(int i = 0; i< a; i++){
		for (int j = 0; j < b; j++){
			prod(k, i, j);
		}
}

}

int prod (int k, int i, int j) {

	vct =  i* j

}

**/

#include <stdio.h>

// Define the maximum size of the vector
#define MAX_SIZE 100

// Function prototype
int dot_product(int i, int j);

// Global variables for the vector and its size
int vct1[MAX_SIZE][MAX_SIZE];
int vct2[MAX_SIZE][MAX_SIZE];
int a, b;

int main() {
    // Ask user for the size of the matrices
    printf("Enter the size of matrices (rows and columns):\n");
    scanf("%d %d", &a, &b);

    // Input values for each element of the matrices
    printf("Enter values for matrix 1:\n");
    for(int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter value for element (%d, %d):\n", i, j);
            scanf("%d", &vct1[i][j]);
        }
    }

    printf("Enter values for matrix 2:\n");
    for(int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter value for element (%d, %d):\n", i, j);
            scanf("%d", &vct2[i][j]);
        }
    }

    // Compute and print the dot product of the matrices
    printf("Dot product of the matrices:\n");
    for(int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", dot_product(i, j));
        }
        printf("\n");
    }

    return 0;
}

// Function to compute the dot product of element (i, j) in the matrices
int dot_product(int i, int j) {
    int result = 0;
    for (int k = 0; k < a; k++) {
        result += vct1[i][k] * vct2[k][j];
    }
    return result;
}
