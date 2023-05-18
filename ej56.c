#include<stdio.h>

int main() {
	float n;
	float num1;
	float numtotal;
	float x;
	printf("Ingrese un numero\n");
	scanf("%f",&n);
	for (x=1;x<=n;x+=1) {
		printf("Ingrese un numero para sumar al total\n");
		scanf("%s",num1);
		numtotal = numtotal+num1;
	}
	printf("Total=\n");
	printf("%f\n",numtotal);
	return 0;
}

