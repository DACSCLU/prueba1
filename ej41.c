#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ;
	int conn=0;
	scanf("%d\n",&num);
	do
		num=trunc(num/10);
	    con=conn++;
	    printf("Valor actual del num inicial= %d\n",&num );
	    printf("Contador= %d\n",con);
	while (num==0);
	return 0;
}