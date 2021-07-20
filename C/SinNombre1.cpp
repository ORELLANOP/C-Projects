#include<stdio.h>
#include<conio.h>

int i;
int j;

void multiplicar(int *);

main(){
	
	int vec[4];
	printf("Ingrese los valores del vector\n");
	
	for(i=0; i<4 ; i++){
		printf("Ingrese el dato numero: %d \n", i+1);
		scanf("%d", &vec[i]);
	}
	
	printf("El vector original es:\n");
	for(i=0; i<4; i++){
		printf("%3d", vec[i]);}
		
		printf("\nEl vector despues de la funcion es:");
	
	multiplicar(vec);
	
	return 0;
	
}

void multiplicar (int v[]){
	for(j=0; j<4; j++){
		
		//	printf("%3d", v[j]);}
	
	*(v+j) *= 2;
	printf("%3d", *(v+j));}
}
