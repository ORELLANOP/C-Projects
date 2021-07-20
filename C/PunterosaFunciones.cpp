/*PUNTEROS A FUNCIONES*/



#include<stdio.h>
int suma(int a, int b);
void mprintf (int ((*f) (int, int)), int amy, int bmy);// La funcion mprintf toma como variables un puntero,
                                                       //( el cual es un puntero a una funcion la cual tiene como argumento dos variables enteras)
                                                      //y dos variables enteras amy y bmy.

/* esta funcion recibe como parametro el puntero a otra funcion   void mprintf (int (*f) (int, int), int amy, int bmy);
En el siguiente codigo la funcion suma es pasada como parametro a mprintf deberia pasarse la direccion de la funcion suma (&suma) sin 
embargo usualmente el nombre de la funcion es tomado como su direccion*/

main(){
	
	int am, bm;
	scanf("%d%d", &am, &bm);
	mprintf(&suma, am, bm);
}

int suma (int a, int b){
	return a+b;
}

void mprintf (int ((*f) (int, int)), int amy, int bmy){
printf("%d", ((*f) (amy, bmy)));//Puntero a funcion de dos variables enteras, es decir, lo que imprime es lo que realiza la funcion suma
}                               //ya que esta desrreferenciando el valor del puntero que apunta a esa funcion.
