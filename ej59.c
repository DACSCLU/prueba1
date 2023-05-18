#include<stdio.h>
#include<math.h>

int main() {
	float val;
	float valtotal;
	float x;
	for (x=1;x<=10;x+=1) {
		val = pow(x,2);
		valtotal = valtotal+val;
		printf("%f\n",val);
	}
	printf("%f\n",valtotal);
	return 0;
}

