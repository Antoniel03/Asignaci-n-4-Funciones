#include <stdio.h>

//Funci�n que suma los valores a y b, devolvi�ndo su resultado
int suma(int a, int b){
	return a+b;
}


//Funci�n principal
int main(){
	int num1; int num2; int resultado;
	
	//Petici�n de entrada de datos al usuario
	printf("Ingrese la primera cantidad a sumar:\n");
	scanf("%d", &num1);
	printf("Ingrese la segunda cantidad a sumar:\n");
	scanf("%d", &num2);
	
	//LLamada a la funci�n suma
	resultado = suma(num1, num2);
	
	//Impresi�n en pantalla del resultado
	printf("El resultado de la suma es: %d", resultado);
	return 0;
}
