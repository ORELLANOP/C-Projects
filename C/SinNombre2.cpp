#include<stdio.h>
#include<conio.h>

void multiplicacion (int *);

int i;
int j;

main(){
	
	int matriz[2][2];
	printf("Ingrese los datos de la matiz: \n\n");
	for(i=0; i<2 ; i++){
		for(j=0; j<2; j++){
			printf("\nIngrese el elemento: [%d][%d]\n",i+1,j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nLos elementos de la matriz son:\n");
	for(i=0; i<2 ; i++){
		for(j=0; j<2; j++){
			printf("%3d", matriz[i][j]);
		}
	}
	printf("\nLos valores de la matriz despues de la funcion son: \n");
	
	multiplicacion(*matriz);
	
	return 0;
}



void multiplicacion (int *m[]){
	for(i=0; i<2 ; i++){
		for(j=0; j<2; j++){
			//*(*(m+i)+j) *=2;
			printf("%3d", *(*(m+i)+j));} } 
			
		}
	

