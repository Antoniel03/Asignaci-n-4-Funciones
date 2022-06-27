#include <stdio.h>

//Función que suma los valores a y b, devolviéndo su resultado
int suma(int a, int b){
	return a+b;
}


//Función principal
int main(){
	int num1; int num2; int resultado;
	
	//Petición de entrada de datos al usuario
	printf("Ingrese la primera cantidad a sumar:\n");
	scanf("%d", &num1);
	printf("Ingrese la segunda cantidad a sumar:\n");
	scanf("%d", &num2);
	
	//LLamada a la función suma
	resultado = suma(num1, num2);
	
	//Impresión en pantalla del resultado
	printf("El resultado de la suma es: %d", resultado);
	return 0;
}
