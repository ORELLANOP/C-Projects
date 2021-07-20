#include<stdio.h>
#include<conio.h>

main(){
	int a,*b, i, v[9]={56, 78, 80, 33, 12, 67, 44, 8, 65};
	a=0;
	
	for(i=0; i<9; i++){
	
	printf("Los elementos del arreglo son: %d\n", v[i]);
}

a= (*v)+1 ; // a es un entero porque el puntero ya esta DESRREFERENCIADO, y a ese valor le sumo 1, no es mas que una operacion aritmetica 
b= v+1; // b es un puntero que apunta a la segunda posicion de memoria del arreglo, luego al imprimirlo es desrreferenciado y por eso obtenemos un valor entero
printf("El resultado de a es: %d, y el de b es: %d\n", a, *b);
return 0;

}
