#include<stdio.h>
#include<stdlib.h>

struct autoref{
	int dato;
	struct autoref *sig1;
	struct autoref *sig2;
};

void imprimir_nodo(struct autoref *p);

main(){
	struct autoref *raiz, *padre_act, *marcador, *nuevo;
	int c;
	
	raiz= (struct autoref *) malloc(sizeof(*raiz));
	(*raiz).dato=getchar();
	(*raiz).sig1=NULL;
	(*raiz).sig2=NULL;
	
	while((c=getchar()) != 's'){
		marcador = raiz;
		while (marcador != NULL){
			padre_act=marcador;
			if ((int)c < (int) (*padre_act).dato)
			   marcador = (*padre_act).sig1;
			else
			   marcador = (*padre_act).sig2;
			    
		}
		
		nuevo=(struct autoref *)
		malloc(sizeof(*nuevo));
		(*nuevo).sig1=NULL;
		(*nuevo).sig2=NULL;
		(*nuevo).dato=c;
		
		if((int)c < (int)(*padre_act).dato)
		   (*padre_act).sig1=nuevo;
		else
		    (*padre_act).sig2=nuevo;
		    
		printf("raiz %d padre_act %d nuevo %d\n", raiz, padre_act, nuevo);
		
	}
	
	imprimir_nodo(raiz);
}

void imprimir_nodo (struct autoref *p){
	
	if(p!= NULL){
		printf("%c", (*p).dato);
		
		if((*p).sig1 != NULL)
		imprimir_nodo((*p).sig1);
		
		if((*p).sig2 != NULL)
		imprimir_nodo((*p).sig2);
	}
}
