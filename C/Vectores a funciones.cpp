#include<stdio.h>
#include<conio.h>

void imprimestr(char**frase);

main(){
	char fr[]="Frase de prueba", *punt;
	punt= fr;
	printf("Direc.puntero: %p\n", punt);
	imprimestr(&punt);
	printf("Direc.puntero: %p\n", punt);
	imprimestr(&punt);
	printf("Direc.puntero: %p\n", punt);
	return 0;
}

void imprimestr(char**frase){
	int i;
	printf(" Contenido\n");
	for(i=0; i<20; i++)
	putchar(**(frase)++);
	putchar('\n');
}
