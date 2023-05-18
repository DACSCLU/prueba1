#include<stdio.h>

int main() {
	float hd;
	float pp;
	float pr1;
	float pr2;
	float pr3;
	float rf;
	float total;
	pr1 = 1;
	pr2 = 1;
	pr3 = 1;
	printf("Restaurante Hot-Dog\n");
	printf("Cuantos hot dogs desea llevar?\n");
	scanf("%f",&hd);
	printf("Cuantas papas desea llevar?\n");
	scanf("%f",&pp);
	printf("CUantas bebidas va a llevar?\n");
	scanf("%f",&rf);
	total = (hd*pr1)+(pp*pr2)+(rf*pr3);
	printf("El precio total es =$%f Pesos\n",total);
	return 0;
}

