#include <stdio.h>
void main(){
	int tam, pos, valor;
	//Se pide el tamaño del vector
	printf("Ingrese el tamaño del vector:\n");
	scanf("%d", &tam);
	//Se crea el vector y se le asigna el tamaño
	int vector[tam];
	//Llenado del vector	
	for(pos=0; pos<tam; pos++){
		printf("Ingrese el valor: \n");
		scanf("%d", valor);
		vector[pos]=valor;
	}	
}
