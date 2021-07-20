#include<stdio.h>
#include<stdlib.h>

struct nodo {
	int dato;
	struct nodo *sig;
};

main(){
	struct nodo *base, *p;
	int x;
	base=NULL;
	
	printf("Ingrese el dato:\n");
	scanf("%d", &x);
while(x!=0){	
	

	p=(struct nodo*) malloc(sizeof(struct nodo));
	(*p).dato=x;
	(*p).sig=base;
	base=p;
	printf("Ingrese el dato:\n");
	scanf("%d", &x);
};

while(p!=NULL){
	printf("%3d", (*p).dato);
	p=(*p).sig;
}

return 0;
}
