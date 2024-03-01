/*
Initialize two vectors of same size point two vectors withh two different
pointers. Now compute their euclidean distace iusing pointers.

*/

#include <stdio.h>
#include <math.h>

int euclidean_dist(int[], int[]);

int main void()
{
	// 3D vcts
	int v1 = {2, 4, 6};
	int v2 = {5, 6, 2};
	int *p1, *p2, distance;
	p1 = v1;
	p2 = v2;
	float sq;

	for (int i = 0; i < 3; ++i)
	{
		distance = *(p1+i) - *(p2+i);
		sum = sum + distance *distance;
	}

	sq = sqrt(sum);
	printf("%f\n",sq );

}