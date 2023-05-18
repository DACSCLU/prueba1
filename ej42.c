#include <stdio.h>
int main(int argc, char const *argv[])
{
	int opc;
	scanf("%d\n",&opc);
	switch(opc)
	{
	case 1:
		printf("UNO %d\n");
		
		break;
    case 2:
		printf("DOS %d\n");
		
		break;
	case 3:
		printf("TRES %d\n");
		
		break;
	case 4:
		printf("CUATRO %d\n");
		
		break;
	case 5:
		printf("CINCO %d\n");
		
		break;
	default:
		printf("no conozco esa palabra %d\n");



	}
	return 0;
}