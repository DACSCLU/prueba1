#include <stdio.h>
int main(int argc, char const *argv[])
{
	int OPCI,sb,im,av,fd,sn;
	int NOMBREEMPLEADO;
	int HORASTRABAJDAS;
	int PPH;
	int x=0.8;
	int b=10;
	int c=0.13;
	printf("ingrese el nombre del empleado \n");
	scanf("%s\n",&NOMBREEMPLEADO);
	printf("ingrese las horas que trabajo \n");
	scanf("%d\n",&HORASTRABAJDAS);	
	printf("ingrese su pago por hora \n");
	scanf("%d\n",&PPH);
	printf("Eliga una opcion ingresando el numero correspondiente \n");
	printf("1.- Calculo del salario bruto \n");
	printf("2.-Calculo de IMMS \n");
	printf("3.-Calculo de Vales\n ");
	printf("4.- Calculo de Fondo de ahorro \n");
	printf("5.-Calculo de Sueldo neto \nv");
	scanf("%d\n",&OPCI);
	printf("  %d\n");
	sb=HORASTRABAJDAS*PPH;
	im=(HORASTRABAJDAS*PPH)*x;
	av=(HORASTRABAJDAS*PPH)/b;
	fd=(HORASTRABAJDAS*PPH)*c;
	sn=sb-im-av+fd;
	switch(OPCI)
{
 case 1: printf("Nombre del empleado= %d\n",&NOMBREEMPLEADO);
 	     printf("Sueldo bruto=        %d\n",&sb);
 break;
 case 2: printf("Nombre del empleado= %d\n",&NOMBREEMPLEADO);
 	     printf("sueldo imms=        %d\n",&im);
 break;
case 3: printf("Nombre del empleado= %d\n",&NOMBREEMPLEADO );
	    printf("adicion de vales=    %d\n",&av);
break;
case 4: printf("Nombre del empleado=        %d\n",&NOMBREEMPLEADO );
	    printf("Calculo de Fondo de ahorro= %d\n",&fd);
break;
case 5: printf("Nombre del empleado=      %d\n",&NOMBREEMPLEADO );
	    printf("Calculo de Salario Neto=  %d\n",&sn);
break;
}



	return 0;
}