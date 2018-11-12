//Imprimir los primeros n numeros de la serie FIbonacci con recursión
#include <stdio.h>

int main(){
	//Declaración de variables
	int posicion, antesAnterior, fib;
	
	//Creación de la función fibonacci
	int fibonacci(){
		//Se pide el número al usuario
		printf("Ingrese un numero");
		scanf("%i", &fib);
		//La primera posición, por defecto es 1.
		if(fib==1){
			printf("El fibonacci es 1");
		}
		//La segunda posicion, por defecto es 2.
		else if(fib==2){
			printf("El fibonacci es 2");
		}
		//A partir del la posición 3 en adelante se hace el cálculo.
		else{
			//for
		}
		//Y aquí se me topó el cerebro :'c
	}

	return 0;
}	
