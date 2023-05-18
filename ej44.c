#include<stdio.h>

int main() {
	int num;
	scanf("%i",&num);
	if (num==1) {
		printf("UNO\n");
	} else {
		if (num==2) {
			printf("DOS\n");
		} else {
			if (num==3) {
				printf("TRES\n");
			} else {
				if (num==4) {
					printf("UNO\n");
				} else {
					printf("No conozco el numero\n");
				}
			}
		}
	}
	return 0;
}

