//Programa de ordenamiento multiproposito que utiliza apuntadores a funciones
#include<stdio.h>
#define TAMANIO 10

//Prototipos
void burbuja (int trabajo[], const int tamanio, int (*compara) (int a, int b));
int ascendente(int a, int b);
int descendente (int a, int b);

int main(){
	
	int orden; //1 para el orden ascendente o 2 para el orden descendente
	int contador;
	
	//Inicializa el arreglo a
	int a[TAMANIO]={ 2, 4, 6, 8, 10, 12, 89, 68, 45, 37};
	printf("Introduzca el 1 para el orden ascendente o el 2 para el orden descendente\n");
	scanf("%d", &orden);
	printf("Elementos en el orden original:");
	for(contador=0; contador< TAMANIO; contador++){
		printf("%5d", a[contador]);
	}
	
	if(orden==1){
		burbuja(a, TAMANIO, ascendente);
		printf("Elementos de datos en forma ascendente:\n");
	}
	else{
		burbuja(a, TAMANIO, descendente);
		printf("Elementos de datos en forma descendente:\n");
		
	}
	
	for(contador=0; contador< TAMANIO; contador++){
		printf("%5d", a[contador]);
	}
	
	printf("\n");
	return 0;
}




