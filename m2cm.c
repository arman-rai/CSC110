#include <stdio.h>

int main() {

	int i;
	float val, ans;

A:
	printf("\tMeter and Centimeter converter.\n(0) Meter to Centimeter\n(1) Centimeter to Meter.\n");
	scanf("%d",&i);
	if (i!=0 && i!=1) {
		goto A ;
	}

	printf("Enter the value: ");\
	scanf("%f",&val); 

	if(i ==  0) {
		ans = val*100;
		printf("\tIn cm: %f cm",ans );
	}
	else if(i == 1) {
		ans = val/100;
		printf("\tIn m: %f m", ans);
	}
	else {
	return 1;
	}
	
return 0;
}
