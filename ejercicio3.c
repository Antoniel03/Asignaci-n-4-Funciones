#include <stdio.h>
#include <string.h>

//Función para concatenar
char *concatenar(char a[], char b[]){
	int i=0; int j=0; 
	
	
	//Ciclo para mover los caracteres de una cadena a otra
	for (i=0; a[i]!='\0';  i++);
	for (j=0; b[j]!='\0';  j++){
		a[i]=b[j];
		i++;
	}
		
	return a;	
}

//Función principal
int main(){
	char p1[20];
	char p2[20];
	
	//Petición de datos al usuario
	printf("Introduzca la primera palabra a concatenar:\n");
	scanf("%s", p1);
	printf("Introduzca la segunda palabra a concatenar:\n");
	scanf("%s", p2);
	
	//LLamada a la función 
	char *c = concatenar(p1, p2);
	
	//Impresión del resultado de la función
	printf("%s", c); 
	
	
	
}
