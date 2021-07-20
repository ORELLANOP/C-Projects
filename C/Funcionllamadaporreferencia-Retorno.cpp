#include<stdio.h>

int funcioncubo (int *);

main(){

int a=0, d=0;

printf("Este programa calcula el cubo de un numero entero\n");
printf("Ingrese el numero:\n");
scanf("%d", &a);
printf("El numero ingresado es :%d\n", a);
d=funcioncubo (&a);
printf ("El cubo del valor ingresado es: %d\n", d);	

return 0;
}

int funcioncubo (int *b){
int c=0;
	c= *b * *b * *b;
	
	return (c);

}
