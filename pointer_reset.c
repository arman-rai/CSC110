//Pointer as array
#include <stdio.h>
#include <math.h>

int main (void)
{
	// 3D vcts
	int v1[][3] = {{2, 4, 6}, {5, 6, 2}};
	int v2[][3] = {{5, 6, 2}, {5, 6, 2}};
	int *p1, *p2, *p3, v3[2][3];
	p1 = v1;
	p2 = v2;
	p3 = v3;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			*(*(p3+i)+j) = 0; //Resetting the value to 0 to avoid errors
		}
	}

}
