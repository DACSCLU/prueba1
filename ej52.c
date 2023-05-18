#include<stdio.h>
int main() {
	float di;
	float edad;
	float eth;
	float etm;
	int genero;
	float nh;
	float nm;
	float peh;
	float pem;
	float x;
	for (x=1;x<=15;x+=1) {
		printf("Genero de la persona (1 es Hombre o 2 es Mujer)\n");
		scanf("%i",&genero);
		switch (genero) {
		case 1:
			printf("Ingrese la edad de este\n");
			scanf("%s",edad);
			eth = eth+edad;
			nh = nh+1;
			break;
		case 2:
			printf("Ingrese la edad de esta\n");
			scanf("%f",&edad);
			etm = etm+edad;
			nm = nm+1;
			break;
		default:
			printf("INVALIDO\n");
			di = di+1;
		}
	}
	peh = eth/nh;
	pem = etm/nm;
	printf("Se tomaron datos de %f Hombres\n",nh);
	printf("Se tomaron datos de %f Mujeres\n",nm);
	printf("Se contaron %f Datos invalidos\n",di);
	printf("El promedio de edad de los hombres es= %f\n",peh);
	printf("El promedio de edad de las mujeres es= %f\n",pem);
	if (peh==pem) {
		printf("Ambos generos tienen el mismo promedio\n");
	} else {
		if (peh>pem) {
			printf("El genero con el promedio de edad mayor son los hombres\n");
		} else {
			printf("El genero con el promedio de edad mayor son los hombres\n");
		}
	}
	if (etm==eth) {
		printf("Ambos generos tienen la misma edad total\n");
	} else {
		if (eth>etm) {
			printf("El genero con la edad total mayor son los hombres\n");
		} else {
			printf("El genero con la edad total mayor son las mujeres\n");
		}
	}
	return 0;
}

