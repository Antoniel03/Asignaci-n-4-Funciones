#include <math.h>
#include <stdio.h>

//Funci�n para obtener las ra�ces
int raices(float a, float b, float c) {
    float discriminante, r1, r2, real, d;

    discriminante = b * b - 4 * a * c;

    // Condici�n para ra�ces mayores a 0
    if (discriminante > 0) {
        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("raiz1 = %.2lf y raiz 2 = %.2lf", r1, r2);
    }

    // Condici�n para ra�ces iguales a 0
    else if (discriminante == 0) {
        r1 = r2 = -b / (2 * a);
        printf("raiz 1 = raiz 2 = %.2lf;", r1);
    }

    // Ra�ces no reales
    else {
        real = -b / (2 * a);
        d = sqrt(-discriminante) / (2 * a);
        printf("raiz 1 = %.2lf+%.2lf y raiz 2 = %.2f-%.2f", real, d, real, d);
    }
	return 0; 
}
//Funci�n principal
int main(){
	float x, y, z;
	
	//Petici�n de los valores al usuario
	printf("Introduzca los valores para las variables a, b y c:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    
    //Llamada a la funci�n
    raices(x, y, z);
    
	return 0;
} 
