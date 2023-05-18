#include<stdio.h>
#include<math.h>

int main() {
	float n;
	float potencia;
	float x;
	printf("Escriba 2 numeros, el primero sera elevado al segundo\n");
	scanf("%f",&x);
	scanf("%f",&n);
	potencia = pow(x,n);
	printf("Resultado=\n");
	printf("%f\n",potencia);
	return 0;
}

