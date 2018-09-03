#include <stdio.h>
void main(){
	int anterior=2, antesAnterior=1, cuantos, pos ;
	printf("¿Cuántos números del fibonacci quiere que se muestren?")
	scanf("%d", &cuantos);
	int vector[cuantos];
	//Los primeros dos numeros de la serie ya están definidos
	if(cuantos=1){
		vector[0]=1;
	}
	else if(cuantos=2){
		vector[0]=1;
		vector[1]=2;
	}
	else{
	for(pos=2; pos<cuantos; pos++){
		vector[pos]=antesAnterior+anterior;
		antesAnterior=anterior;
		anterior=vector[pos];
		}
	}
}





