// Paso de vectores a funciones
#include<stdio.h>
#include<conio.h>
int vecsum( int *p);

main(){
	int v[]={1, 1, 9, 1};
	printf("La suma es: %d", vecsum(v)); //Recordar que v=&v[0], direccion del primer elemento del arreglo.
}
//No es otra cosa que una llamada a funcion por referencia.
int vecsum( int *p){
	return( *p +*(p+1)+ *(p+2)+ *(p+3));
}

//Dos formas de escribir la funcion puts()

/*void puts (char frase[]){
	register int t;
	for(t=0; frase[t]; t++)
	putchar(frase[t]);
	putchar ('\n');
}

void puts(char *frase){
	while (*frase)
	putchar(*frase++);
	putchar('\n');
}*/
