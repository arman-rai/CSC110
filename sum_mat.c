//initialize 2 matrices of same size
//declare 3rd matrix of same size
//point 3 matrices with 3 pointer
//sum of 2 matrices in 3rd matrix

int main ()
{
	/*int m1[] = {2, 5, 6};
	int m2[] = {2, 5, 6};
	int m3[sizeof(m1)];
	*/

	int m1[][3] = {{2, 4, 3}, {4, 67, 2}};
	int m2[][3] = {{2, 4, 3}, {4, 6, 2}};
	int m3[2][3], *p1, *p2, *p3;
	p1 = &m1[0][0], p2 = &m2[0][0], p3 = &m3[0][0]; //pointing to the 1st element in the array  
	while (p1 <&m1[0][0] + 6) // 6 because 6 elements
	{
			*p3 = *p1 + *p2;
			*p1++;
			*p2++;
			*p3++;
	}

for (int i = 0; i < 6; i++)
{
	printf("%d\n",*p3 );
	*p3++;
}
}