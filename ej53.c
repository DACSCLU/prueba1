#include<stdio.h>

int main() {
	int num;
	printf("Ingrese su numero de mes\n");
	scanf("%i",&num);
	switch (num) {
	case 1:
		printf("Enero, 31 Dias\n");
		break;
	case 2:
		printf("Febrero, 28 Dias\n");
		break;
	case 3:
		printf("Marzo, 31 Dias\n");
		break;
	case 4:
		printf("Abril, 30 Dias\n");
		break;
	case 5:
		printf("Mayo, 31 Dias\n");
		break;
	case 6:
		printf("Junio, 31 Dias\n");
		break;
	case 7:
		printf("Julio, 31 Dias\n");
		break;
	case 8:
		printf("Agosto, 31 Dias\n");
		break;
	case 9:
		printf("Septiembre, 30 Dias\n");
		break;
	case 10:
		printf("Octubre, 31 Dias\n");
		break;
	case 11:
		printf("Noviembre, 30 Dias\n");
		break;
	case 12:
		printf("Diciembre, 31 Dias\n");
		break;
	default:
		printf("Numero no valido\n");
	}
	return 0;
}

