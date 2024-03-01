
#include <stdio.h>

int main(void)
{
	int m2[][3] = {{3, 5, 6}, {4, 6, 2}};
	int *p1;
	p1 = &m2[0][0];
	while (p1 < &m2[0][0] +6){
		printf("%d\n",*p1);	
		p1++;
	}

}