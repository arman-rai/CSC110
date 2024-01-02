
#include<stdio.h>
int main ()
{
	int n,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a = n&1;
switch (a)
	{
		case 1:
			printf("odd number");
			break;
		default:
			printf("even");
	}

return 0;
}
