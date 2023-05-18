#include<stdio.h>

int main() {
	int a;
	scanf("%i",&a);
	if (a>=0) {
		if ((a%2)==0) {
			printf("El numero es positivo par\n");
		} else {
			printf("El numero es positivo impar\n");
		}
	} else {
		a = a*(-1);
		if ((a%2)==0) {
			printf("El numero es negativo par\n");
		} else {
			printf("El numero es negativo impar\n");
		}
	}
	return 0;
}

