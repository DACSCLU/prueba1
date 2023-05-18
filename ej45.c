#include<stdio.h>

int main() {
	float val;
	val = 0;
	printf("%f\n",val);
	do {
		val = val+3;
		printf("%f\n",val);
		val = val+2;
		printf("%f\n",val);
	} while (val!=100);
	return 0;
}

