//Programa: Calculadora
//freedom

#include <stdio.h>
#include "calculator.h"


int main()
{
	//Declaracion de variables
	double a= 0.0;
	double b= 0.0;
	double result2 = 0.0;
	char oper = '+';

	printf("Ingresa tus numero de esta forma: a+b|a-b|a*b|a/b\n");

	//ciclo while para realizar n cantidad de operaciones. 
	
	while(1)
	{
		//almacenamos valores introducidos por 
		//teclado a variabel a, oper, b.
		scanf("%lf%c%lf",&a ,&oper, &b);
		//printf("a= %f, oper = %c,b=%f\n",a,oper,b);
		//enviamos datos a la funcion calculate para
		//realizar la operacion requerida.
		result2 = calculate(a,oper,b);
		//Imprimimos por teclado el resultado.
		printf("El resultado es: %lf\n",result2);
		
	}	
	
	
	return 0;
}