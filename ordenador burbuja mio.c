#include <stdio.h>
int main(int argc, char const *argv[])
{
	int y,x;
	int arreglo[10];
	for (int i = 0; i < 10-2; ++i)
	{
	   for (int y = 0; y < 10-i-2; ++i)
	   {
	   	if (arreglo[y]>arreglo[y+1])
	   	{
	   		x=arreglo[y];
	   		arreglo[y]=arreglo[y+1];
	   		arreglo[y+1]=x;
	   	}
	   }
	}
	printf("ordenado\n");
	for (int o = 0; o < 10; ++o)
	{
		printf("%d\n",arreglo[o] );
	}
	return 0;
}