// without using strlen()
#include <stdio.h>

int main(void) {

	int i = 0, c = 0;
	char myStr[] = "appleman";

	while (myStr[i] != '\0') {
		i++;
		c++;
	}

	printf("%d characters.\n",c );
}
