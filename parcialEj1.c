#include <stdio.h>
//Ejercicio 1: Punto de silla.
int main(void){
	int valor, fil, col, tam, menor;
	//Preguntar tamaño de la matriz
	printf("¿De que tamanio desea la matriz? (nxn) \t");
	scanf("%d", &tam);
	int matriz[tam][tam];
	//Llenado de la matriz
	for(fil=0; fil<tam; fil++){
		for(col=0; col<tam; col++){
			printf("Ingrese un valor: \n");
			scanf("%d", &valor);
		}
	}
	//Recorrido de la matriz para evaluar los valores
	//Para comenzar, el primer valor será el menor y se irá comparando con los demás.
	int menor=matriz[0][0];
	for(fil=0; fil<tam; fil++){
		for(col=0; col<tam; col++){
			if(matriz[fil][col]<menor){
				menor=matriz[fila][col];
			}
			for(fil=0; fil<tam; fil++){
				int mayor=matriz[fila][col];
				if(matriz[fil][col]>mayor){
					printf("...");
				}
				else{
					printf("El valor %d es un PUNTO DE SILLA y se encuentra en la posición [%d][%d]", &mayor, &fila, &col)
				}
			}
		}
		if
	}
}
