  #include<stdio.h>
#include<iostream>

class operaciones{
	int INT1, INT2, B, C, D;
	public:
		   operaciones(int X1, int X2);
		   ~operaciones();
		   int opB(int INT1);
		   int opC(int INT2);
		   int opD(int INT2);
		   void imprimir(int B, int C, int D);
};

void main(){
	operaciones ops 1(0,0);
	return 0;
	
}

operaciones::operaciones(int X1, int X2){
	printf("iniciando constructor\n");
	printf("Valor INT1: ");
	scanf("%d", &INT1);
	printf("\nValor INT2:");
	scanf("%d", &INT2);
	B=opB(INT1);
	C=opC(INT2);
	D=opD(INT2);
	imprimir(B, C, D); 
}


operaciones::~operaciones(){
	printf("Ejecutando el destructor\n");
}


int operaciones:: opB(int INT1){
	int aux=0;
	aux=INT1 & 0x0008;
	if(aux>0)
	return 1;
	else return 0;
}

int operaciones:: opC(int INT2){
	int aux=0;
	aux=INT2| 0x0020;
	return aux;
}

int operaciones:: opD(int INT2){
	int aux, aux1, aux2;
	aux1=INT2 & 0x0003;
	aux1=aux1 << 14;
	aux2=INT2>>2;
	aux2=aux2 & 0x3FFF;
	aux=aux1|aux2;
	return aux;
}

operaciones:: imprimir(int B, int C, int D){
	printf("\n INT1: %x", INT1);
	printf("\n INT2: %x", INT2);
	if(B==1)
		printf("\n B) el bit 4 de INT1 esta activo\n");
	else
		printf("\n B) el bit 4 de INT1 esta inactivo\n");
		
	printf("C) %x\n", C);
	printf("D) %x\n", D);		
}

