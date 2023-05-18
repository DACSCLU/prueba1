#include <stdio.h>
#include <>
using namespace std;
int main(int argc, char const *argv[])
{
	string x;
	string b;
	printf("Contraseña\n");
	scanf("%c",&x);
	if (x=="TRON")
	{
		printf("entrar a la red?\n");
		printf("[SI]       [NO]\n");
		scanf("%c",&b);
		printf("entrando\n");

	}
	return 0;
}