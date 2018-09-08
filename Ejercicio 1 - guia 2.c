#include <stdio.h>
void main(){
	int valor, filas, columnas, fila, columna, divisibles;
	//Se le pide el tamaño de la matriz al usuario.
	printf("Bienvenido. ¿De cuantas filas quiere las matrices?");
	scanf("%d", &filas);
	printf("\n¿De cuantas columnas quiere las matrices?");
	scanf("%d", &columnas);
	int matrizA[filas][columnas];
	int matrizB[filas][columnas];	
	//Llenado de la matrizA
	for(fila=0; fila<filas; fila++){
		for(columna=0; columna<columnas; columna++){
			printf("\nIngrese un valor para la matrizA");
			scanf("%d", &valor);
			matrizA[fila][columna]=valor;
		}
	}
	printf("\nHa llenado la matriz A.");
	
	//Llenado de la matrizB
	for(fila=0; fila<filas; fila++){
		for(columna=0; columna<columnas; columna++){
			printf("\nIngrese un valor para la matriz B");
			scanf("%d", &valor);
			matrizB[fila][columna]=valor;
		}
	}
	printf("\nHa llenado la matriz B.");
	
	//Calcular el producto y mandarlo a tercer matriz. De una vez se imprime.
	int matrizC[filas][columnas];
	printf("\nEl producto es:\n");
	for(fila=0; fila<filas; fila++){
		for(columna=0; columna<columnas; columna++){
			valor=matrizA[fila][columna]*matrizB[fila][columna];
			matrizC[fila][columna]=valor;
			printf("%d\t", valor);
		}
		printf("\n");
	}
	//Buscar los numeros primos
	for(fila=0; fila<filas; fila++){
		for(columna=0; columna<columnas; columna++){
			int i;
			for(i=1; i<matrizC[fila][columna]; i++){
				if(matrizC[fila][columna]%i==0);
				divisibles=divisibles+1;
			}
			//Si es divisible entre dos números, significa que es PRIMO.
			if(divisibles==2){
				printf("El numero %d es primo\n", valor);
				printf("Se encuentra en la posicion:  %d,%d\n", fila, columna);
			}
		}
	}
}
