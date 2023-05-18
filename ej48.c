#include<stdio.h>

int main() {
	int i;
	int j;
	int num;
	scanf("%i",&num);
	i = 1;
	while (i<=num) {
		j = 1;
		while (j<=10) {
			printf("%i * %i = %f\n",i,j,(i*j));
			j = j+1;
		}
		i = i+1;
	}
	return 0;
}

