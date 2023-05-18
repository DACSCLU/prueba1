#include <stdio.h>
int main(int argc, char const *argv[])
{
	int e;
	double x;
	double b;
	double r;
	do
	{

		printf("que operacion desea hacer?\n");
	printf("escriba 1 para suma\n");
	printf("escriba 2 para resta\n");
	printf("escriba 3 para multiplicacion\n");
	printf("escriba 4 para division\n");
	printf("escriba 5 para salir\n");
	scanf("%d",&e);
	switch (e){
	case 1:
		printf("suma\n");
		scanf("%d",&x);
		scanf("%d",&b);
		r=x+b;
		printf("%d\n",r);
		break;
	case 2:
		printf("resta\n");
		scanf("%d\n",&x);
		scanf("%d\n",&b);
		r=x-b;
		printf("%d\n",r);
		break;
	case 3:
		printf("multiplicacion\n");
		scanf("%d\n",&x);
		scanf("%d\n",&b);
		r=x*b;
		printf("%d\n",&r);
		break;
	case 4:
		printf("division\n");
		scanf("%d\n",&x);
		scanf("%d\n",&b);
		r=x/b;
		printf("%d\n",r);
		break;
	}
	} while (e=5);
	return 0;
}