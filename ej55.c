#include<stdio.h>
#include<math.h>

int main() {
	float x;
	for (x=1;x<=30;x+=1) {
		printf("Potencia de 4 a la %f\n",x);
		printf("%f\n",pow(4,x));
		printf("\n");
	}
	return 0;
}

