#include <stdio.h>
#include <string.h>

int main (void) {

	char a[] = "apples", temp;
	int sz = strlen(a);

	for (int i = 0; i < sz/2 ; i++)
	{
		temp = a[i];
		a[i] = a[sz -1-i];
		a[sz -1-i] = temp;
	}

	printf("%s\n",a );
}