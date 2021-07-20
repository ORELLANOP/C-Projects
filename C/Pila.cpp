#include<stdio.h>
#include<stdlib.h>

struct autoref{
	int dato;
	struct autoref *sig;
};

main(){
	struct autoref *base, *p, *q;
	int c;
	base = NULL;/*Se declara un puntero que podemos denominar base y que sirve en este caso para mantener
	              la direccion por donde comenzar a recorrer la lista.*/
	
	printf("Ingrese el dato:\n");
	scanf("%d", &c);
	
	while (c != 0){//Condicion de salida.
		p=(struct autoref *) (malloc(sizeof(*p)));//Se crea el buffer.
		(*p).dato=c;//Almacena el dato.
		(*p).sig= base;//p.sig apuntando a la base. Es necesario para encontrar el fin de la lista al recorrerla una vez cerrada.
		base= p;
		printf("Ingrese el dato:\n");
	    scanf("%d", &c);//Mover base, es decir apuntar donde apunta p.
	}// El ciclo se repite hasta ingresar el numero '0', se crea un nuevo nodo, se almacena el dato etc....
	
	printf ("Lista almacenada:\n");//Recorrido de la pila.
	/*scanf("%d", c);
	while(p!= NULL){
		printf ("%d", (*p).dato);
		p= (*p).sig;
	}
}*/

 while(p!=NULL)
        {
		
         printf("%3d",p->dato);
         p=p->sig;
         
         }
         
     }
     
     
