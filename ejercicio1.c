//Un punto en el plano se puede representar mediante una estructura con dos campos...
#include <stdio.h>
#include <math.h>

struct campo{
	int ejex;
	int ejey;
	}punto1, punto2;
	
int main(){
	//PARTE A)
	//Primero se piden las coordenadas de los puntos.
	//Comenzamos con el punto 1.
	printf("Escriba las coordenadas del punto 1");
	printf("\nEn X:");
	scanf("%i", &punto1.ejex);
	printf("\nEn Y:");
	scanf("%i", &punto1.ejey);
	//Comenzamos con el punto 2.
	printf("\n\nEscriba las coordenadas del punto 2");
	printf("\nEn X:");
	scanf("%i", &punto2.ejex);
	printf("\nEn Y:");
	scanf("%i", &punto2.ejey);
	
	//Ahora, calcular la distancia entre ellos
	int distancia, raiz, cuadradoX, cuadradoY;
	//Vamos por partes c: Primero, sacamos el cuadrado de X
	int ejeX = (punto2.ejex-punto1.ejex);
	cuadradoX = pow(ejeX, 2);
	//Ahora el cuadrado en Y
	int ejeY = (punto2.ejey-punto1.ejey);
	cuadradoY = pow(ejeY, 2);
	//Por último sacamos la raíz cuadrada
	distancia = sqrt(ejeX+ejeY);
	printf("La distancia entre los puntos es: %i", distancia);
	
	
	
	//PARTE B)
	//Calculando la pendiente
	int m= ((punto2.ejey-punto1.ejey)/(punto1.ejex-punto2.ejex));
	//Sacamos la ecuacion general de la recta :D
	printf("La ecuación de la recta es: \ny-%i=%i(x-%i)", punto1.ejey, punto1.ejex);
	
	return 0;
	}
