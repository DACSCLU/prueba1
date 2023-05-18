#include<stdio.h>
#include<string.h>

#define MAX_STRLEN 256

int main() {
	char deporte[MAX_STRLEN];
	float nho;
	float nmu;
	float opc1;
	float peso;
	float prompho;
	float prompmu;
	char res;
	char sexo;
	float sumdho;
	float sumdmu;
	float sumpho;
	float sumpmu;
	while (opc1!=2) {
		printf("Mujer u Hombre\n");
		printf("Conteste con 1 o 2\n");
		scanf("%s",res);
		switch (res) {
		case 1:
			nmu = nmu+1;
			printf("Peso= \n");
			scanf("%f",&peso);
			sumpmu = sumpmu+peso;
			printf("Hace ejercicio? (si o no)\n");
			scanf("%s",deporte);
			if (strcmp(deporte,"si")==0) {
				sumdmu = sumdmu+1;
			} else {
				sumdmu = sumdmu;
			}
			break;
		case 2:
			nho = nho+1;
			printf("Peso= \n");
			scanf("%f",&peso);
			sumpho = sumpho+peso;
			printf("Hace ejercicio? (si o no)\n");
			scanf("%s",deporte);
			if (strcmp(deporte,"si")==0) {
				sumdho = sumdho+1;
			} else {
				sumdho = sumdho;
			}
			break;
		default:
			printf("Invalido\n");
		}
		printf("Hay mas datos?\n");
		printf("(1) SI\n");
		printf("(2) NO\n");
		scanf("%f",&opc1);
		printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
	}
	prompmu = sumpmu/nmu;
	prompho = sumpho/nho;
	printf("Numero de Mujeres=                     %f\n",nmu);
	printf("Numero de mujeres que hacen ejercicio= %f\n",sumdmu);
	printf("Peso promedio mujeres=                 %f\n",prompmu);
	printf("\n");
	printf("Numero de hombres=                     %f\n",nho);
	printf("Numero de hombres que hacen ejercicio= %f\n",sumdho);
	printf("Peso promedio hombres=                 %f\n",prompho);
	return 0;
}

