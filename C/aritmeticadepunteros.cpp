#include<stdio.h>
#include<conio.h>
int main(void){
	int *a, *b, c[4]={18, 20, 22, 24};
	a=b=c;
	printf("Vistos por a es: %d\n", *a);
	printf("Visto por b es: %d\n", *b);
	printf("\nAhora incrementamos los punteros\n\n");
	a++;
	(*b)++;
	printf("Visto por a es: %d\n", *a);
	printf("Visto por b es: %d\n", *b);
}
