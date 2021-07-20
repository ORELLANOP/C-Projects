#include<stdio.h>
#include<stdlib.h>

struct autoref {
	char dato;
	struct autoref *sig1;
	struct autoref *sig2;//Dos estructuras autoreferenciadas en lugar de una.
};

main(){
	struct autoref *base1, *base2, *p, *q;
	char c;
	base1= NULL;
	base2=NULL;
	p=NULL;
	q=NULL;
	
	p= (struct autoref *) malloc(sizeof(*p));//Crea el buffer.
	base1=p;//Apuntar base1 donde apunta p.
	base2=p;//Apuntar base2 donde apunta p.
	(*p).dato=c;//Almacena dato.
	(*p).sig1=NULL;
	(*p).sig2=NULL;//Apuntar ambos a NULL para saber donde termina el recorrido.
	
	while ((c=getchar()) != 's'){//Condicion de salida.
		q=(struct autoref *) malloc (sizeof(*p));//Crea el buffer.
		(*p).sig1=q;
		(*q).sig2=p;
		p=q;
		base2=q;
		(*p).dato=c;
	}
	
	printf("Lista almacenada");//Recorre en un sentido.
	scanf("%c\n", c);
	p=base1;
	while (p != NULL){
		printf("%c", (*p).dato);
		p=(*p).sig1;
	}
		printf("Recorrido inverso");//Recorre en otro sentido.
		scanf("%c\n",c );
		p=base2;
		while(p != NULL){
			printf("%c", (*p).dato);
			p= (*p).sig2;
		}
	}

