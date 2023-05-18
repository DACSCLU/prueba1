#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STRLEN 256
#define SIN_TIPO float
int main() {
	char contrasena[MAX_STRLEN];
	
	float elco;
	float intentos;
	int meses;
	int opc1;
	float saa;
	float saldo;
	float sar;
	saldo = 1000;
	meses = (rand()%60);
	intentos = 0;
	while (intentos!=3) {
		printf("Ingrese la contraseña\n");
		scanf("%s",contrasena);
		if (strcmp(contrasena,"pass123")!=0) {
			printf("Contraseña Incorrecta\n");
			intentos = intentos+1;
		} else {
			printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
			printf("Contraseña correcta, ingrese una opcion\n");
			do {
				printf("1.- Consultar saldo y datos\n");
				printf("2.- Añadir saldo\n");
				printf("3.- Retirar saldo\n");
				printf("4.- Salir\n");
				scanf("%i",&opc1);
				printf("\n");
				switch (opc1) {
				case 1:
					printf("Su saldo es de $%f pesos\n",saldo);
					if (saldo>=1000 && meses>=1) {
						printf("Los meses que su dinero lleva depositado son = %i meses\n",meses);
						printf("El interes que esta aplicado sobre su dinero es de = %f%\n",meses*0.1);
						printf("El monto que el interes genera es de = $%i Pesos\n",(saldo/(meses*0.1)));
					}
					printf("\n");
					intentos = 3;
					break;
				case 2:
					printf("Ingrese el monto a añadir =\n");
					scanf("%f",&saa);
					saldo = saldo+saa;
					printf("Su nuevo saldo es = $%f Pesos\n",saldo);
					intentos = 3;
					printf("\n");
					break;
				case 3:
					printf("Ingrese el monto a retirar = \n");
					scanf("%f",&sar);
					if (sar>saldo) {
						printf("No posee suficientes creditos\n");
						intentos = 3;
					} else {
						saldo = saldo-sar;
						intentos = 3;
						printf("Su nuevo saldo es igual a = $%f Pesos\n",saldo);
					}
					printf("\n");
					break;
				case 4:
					printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
					printf("Gracias por usar nuestos servicios\n");
					intentos = 3;
					break;
				default:
					printf("Opcion invalida\n");
					intentos = 3;
				}
				if (opc1!=4) {
					printf("Quiere realizar otra operacion? (nota opciones invalidas seran interpretadas como un si)\n");
					printf("(1) SI\n");
					printf("(2) NO\n");
					scanf("%s",elco);
					if (elco==2) {
						printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
						printf("Gracias por usar nuestros servicios\n");
					}
				}
			} while (!(opc1==4 || elco==2));
		}
	}
	return 0;
}

