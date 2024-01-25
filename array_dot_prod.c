#include <stdio.h>

int main() {
	int vct1[] = {7, 8, 9};
	int vct2[]  = {4, 5,6 };

	int i, product[5], ans;

	for (i = 0; i< 3; i++) {
		product[i] = vct1[i] *vct2[i];
		ans += product[i];

	}
		
	printf("Dot Product: %d", ans);

return 0;

}
