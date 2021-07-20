#include<stdio.h>
#include<conio.h>

main(){
	int *b, *a, c[5]={ 7, 9, 10, 45, 77};
	a=b=c;
	printf("Visto por a es: %d\n", *a);
	printf("Visto por b es: %d\n", *b);
	printf("\nAhora incrementamos los punteros:\n");
	
	(*a)++;
	b+=3;
	
	printf("Visto por a es: %d\n", *a);
	printf("Visto por b es: %d\n", *b);
	
}
