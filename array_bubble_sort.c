
#include <stdio.h>

int a[] = { 3, 5, 75, 6, 23};
int sz = sizeof(a) / sizeof(int);
int i, temp;

for (i = 0; i< sz/2; i++) {
	temp = a[i];
	a[i] = a[sz-1-i];
	a[sz-1-i] = temp;

}

for (i = 0; i<sz; i++) 
	printf("%d\n", a[i]);