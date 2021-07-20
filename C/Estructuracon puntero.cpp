/*Codificar un programa que almacene las coordenadas de un punto en el plano y
 calcule mediante una funcion la distancia del punto al origen empleando el tipo struct*/

#include<stdio.h>
#include<math.h>

struct punto{
	float x;
	float y;
}var;

float distancia (struct punto *);

main(){
	float resultado;
	printf("Ingrese las coordenadas del punto:\n");
	scanf("%f %f", &var.y, &var.x);
	resultado= distancia(&var);
	printf("El resultado es: %f", resultado);
	return 0;
	
}

float distancia (struct punto *var){
	return(sqrt((*var).x * (*var).x+(*var).y * (*var).y));
}
