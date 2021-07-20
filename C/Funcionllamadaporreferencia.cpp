#include<stdio.h>

void funcioncubo (int *);

main(){

int a=0;

printf("Este programa calcula el cubo de un numero entero\n");
printf("Ingrese el numero:\n");
scanf("%d", &a);
printf("El numero ingresado es :%d\n", a);
funcioncubo (&a);
	printf ("El cubo del valor ingresado es: %d\n", a);

return 0;
}

void funcioncubo (int *b){

	*b= *b * *b * *b;
	
	
}
