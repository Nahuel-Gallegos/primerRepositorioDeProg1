#include <stdio.h>
#include <stdlib.h>
//pedir dos numeros, sumar e imprimir
int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int acumulador = 0;
	int contador =0;
	float promedio;
	do
	{
		printf("Ingrese un numero entero, (si quiere detenerce ingrese 00)\n");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado != 00)
		{
			acumulador = acumulador + numeroIngresado;
			contador++;
		}

	}while(numeroIngresado != 00);

	promedio =(float) acumulador / contador;

	printf("El promedio de los numeros ingresados es: %.2f.", promedio);


}
