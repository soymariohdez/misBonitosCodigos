#include <stdio.h>
void main(){
	int tam, pos, valor;
	//Se pide el tama�o del vector
	printf("Ingrese el tama�o del vector:\n");
	scanf("%d", &tam);
	//Se crea el vector y se le asigna el tama�o
	int vector[tam];
	//Llenado del vector	
	for(pos=0; pos<tam; pos++){
		printf("Ingrese el valor: \n");
		scanf("%d", valor);
		vector[pos]=valor;
	}	
}
