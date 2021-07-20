#include<stdio.h>
main(){
	int i, *a, v[10]={4, 8, 89, 60, 56, 1, 76, 22, 13, 99};
	
	a=v;
	
	printf("Los elementos del arreglo son:\n");
	
	for(i=0; i<10; i++)
	printf("%3d", v[i]);
	

	printf("\nEl segundo elemento del arreglo es:%d\n", *(v+1));
	printf("El tercer elemento del arreglo es %d\n", *(v+2));
	printf("El valor del primer elemento incrementado en 2 es: %d\n",*v+2 );
	printf("El valor del tercer elemento del arreglo incrementado en 4 es: %d\n", *(v+2)+4);
	
	
	return 0;
	
}
