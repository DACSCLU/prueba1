#include<stdio.h>

int main() {
	float moneda;
	float numo;
	float opc1;
	float sumon;
	printf("Alcancia\n");
	do {
		printf("Ingrese el valor de la moneda\n");
		scanf("%s",moneda);
		numo = numo+1;
		sumon = sumon+moneda;
		printf("Hay mas monedas?\n");
		printf("(1) Si\n");
		printf("(2) No\n");
		scanf("%s",opc1);
	} while (opc1!=2);
	printf("Numero de monedas en la alcancia= %f\n",numo);
	printf("Importe acumulado en la alcancia = %f\n",sumon);
	return 0;
}

