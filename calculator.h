//file calculator.h
//include the funtion to calculate

//funcion calculate para realizar operacion de 
/*
suma
resta
multiplicacion 
división
*/
double calculate(double x, char oper, double y)
{
	//Dependiendo del caracter introducido 
	//a oper se realizara la operacion.
	switch(oper)
	{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0.0;
	}
	
}