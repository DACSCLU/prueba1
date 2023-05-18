#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numero1, numero2, resultado;
	printf("SUMA DE DOS NUMEROS\n");
	printf("introduzca el primer numero\n");
	scanf("%i", &numero1);
	printf("introduzca el segundo numero\n");
	scanf("%i", &numero2);
	resultado=numero2+numero1;
	printf("la suma es: %i\n", resultado);
	return 0;
}