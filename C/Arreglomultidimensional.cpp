/*Arreglos multidimensionales*/

#include<stdio.h>
void imprimirarreglo (int [][3]);

main(){
	
	int arreglo1 [2][3]={{15, 76, 43}, {49, 57, 66} },
	arreglo2 [2][3]= {1, 2, 3, 4, 5},
	arreglo3[2][3]={{1, 2}, {4}};
	
	printf("\n\nLos valores del arreglo 1 son:");
	imprimirarreglo(arreglo1);
	
	printf("\n\nLos valores del arreglo 2 son:");
	imprimirarreglo(arreglo2);
	
	printf("\n\nLos valores del arreglo 3 son:");
	imprimirarreglo(arreglo3);
	
	printf("\n\nEl primer elemento v[0][0] de arreglo1 es: %d\n",*(*arreglo1) );
	printf("\nEl segundo elemento  v[0][1] de arreglo1 es: %d\n",*(*arreglo1+1) );
	printf("\nEl tercer elemento   v[0][2] de arreglo1 es: %d\n", *(*arreglo1+2));
	printf("\nEl cuarto elemento   v[1][0] de arreglo1 es: %d\n", *(*(arreglo1+1)));
	printf("\nEl quinto elemento   v[1][1] de arreglo1 es: %d\n", *(*(arreglo1+1)+1));
	printf("\nEl sexto elemento    v[1][2] de arreglo1 es: %d\n", *(*(arreglo1+1)+2));
	
	printf("\n\nUtilizando otra notacion:\n\n");
	
	printf("\n\nEl primer elemento v[0][0] de arreglo1 es: %d\n",*(arreglo1[0]) );
	printf("\nEl segundo elemento  v[0][1] de arreglo1 es: %d\n",*(arreglo1[0]+1) );
	printf("\nEl tercer elemento   v[0][2] de arreglo1 es: %d\n", *(arreglo1[0]+2));
	printf("\nEl cuarto elemento   v[1][0] de arreglo1 es: %d\n", *(arreglo1[1]));
	printf("\nEl quinto elemento   v[1][1] de arreglo1 es: %d\n", *(arreglo1[1]+1));
	printf("\nEl sexto elemento    v[1][2] de arreglo1 es: %d\n", *(arreglo1[1]+2));
	
	return 0;
}

void imprimirarreglo(int arreglo[][3]){
	int i, j;
	for(i=0; i<2; i++){
		printf("\n\n");
		for(j=0; j<3; j++){
		
		printf("%4d", arreglo[i][j]);
		}}
	}

