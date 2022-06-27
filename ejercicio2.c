#include <stdio.h>

//Funci�n para calcular la media 
float media(int ciclos){
	int cantidad=0; int i=0; int acumulador=0;

	//Ciclo para introducir y acumular los valores	
	for(i=1; i<=ciclos; i++){
		printf("Valor numero %d:\n", i);
		scanf("%d", &cantidad);
		acumulador += cantidad;
	}
	//Divisi�n entre las n cantidades y el acumulado
	return  (float)acumulador/(float) ciclos;
}

//Funci�n principal
int main(){
	int c; float resultado;
	
	//Petici�n de la cantidad de valores a introducir por parte del usuario
	printf("Algoritmo para calcular la media de un conjunto de numeros\n\nA continuacion ingrese la cantidad de valores que desea introducir\n");
	scanf("%d", &c);
	
	//Llamada a la funci�n para obtener la media
	resultado = media(c);
	
	printf("La media del conjunto introducido es: %.2f", resultado);
	
	
}
