#include <stdio.h>
void main(){
	//Estas son las variables :)
	int cualFila, cualColumna, opcion, pos, filas=5, columnas=5, ok=0;
	float ganancias=0.00;
	//Matriz
	int asientos[tam][tam];
	//Mi "boolean", OCUPADO=1 / VACIO=0
	//Llenar asientos con mi boolean
		for(int fila=0; fila<5; pos++){
			for(int columna=0; columna<5; columna++){
				asientos[fila][columna]=0;
			}
		}
	while(opcion=!3){
		printf("¡Bienvenido a CINEPOLIS FMOcc! ¿Qué acción desea realizar?\n1. Comprar entrada.\n2. Mostrar las ganancias.\n3. Salir.");
		scanf("%d", &opcion);
		switch(cualqQuiere){
			//Comprar entrada
			1: 
			while(ok=0){
			//Preguntar fila
			printf("¿Qué fila desea?");
			scanf("%d", &cualFila);
			//Preguntar columna
			printf("¿Qué columna desea?");
			scanf("%d", &cualColumna);
			if(asientos[cualFila][cualColumna]==1){
				printf("Lo lamento, ese asiento ya se lo ganaron :c. Venga más temprano. Por ahora elija otro asiento :)");
			}
			else{
				ok=1;
				printf("Asiento asignado satisfactoriamente :)");
				asientos[cualFila][cualColumna]=1;
				if(cualFila==1){
					ganancias=ganancias+5.00;
				}
				else if(cualFila==2 || cualFila==3 || cualfila==4){
					ganancias=ganancias+3.50;
				}
				else{
					ganancias=ganancias+2.50;
				}
			}
			}
			break;
			//Mostrar ganancias
			2:
			printf("Ganancias totales");
		}
	}

}
