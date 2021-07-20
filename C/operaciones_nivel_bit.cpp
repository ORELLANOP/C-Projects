#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class operaciones 
				{
					unsigned int INT1, INT2, b, c, d;
					
					public:
					operaciones (unsigned int x1, unsigned int x2);
					~operaciones ();
					int operacionB (unsigned int);
					int operacionC (unsigned int);
					int operacionD (unsigned int);
					void imprimir (unsigned int,unsigned int, unsigned int);
					
				};
				
operaciones::operaciones(unsigned int x1, unsigned int x2)

			{
				printf("Iniciando Constructor\n");
				printf("valor INT1:\n");
				scanf("%d",&INT1);
				printf("valor INT2:\n");
				scanf("%d",&INT2);
				 printf("Realizadon la operacion B\n");
		 b=operacionB(INT1);
		 printf("Realizadon la operacion C\n");
		 c=operacionC(INT2);
		 printf("Realizadon la operacion D\n");
		 d=operacionD(INT2);
		  imprimir(b, c, d);	
			}		

operaciones::~operaciones()
{
printf("ejecutando destructor\n");
}

main () 
	{
		//unsigned int b, c, d;
		//class operaciones op1;
	 	operaciones op(0,0);
	     
	return 0;
	}
	
int operaciones::operacionB (unsigned int i)
		{
			if(i&16)
			return 1;
			else
			return 0;
		}

int operaciones::operacionC (unsigned int j)
		{
			j=j|64;
			return j;
	    }

int operaciones::operacionD (unsigned int INT2)
		{
		 int aux, aux1, aux2;
		 aux1=INT2 & 0x0003;
		 aux1=aux1 << 14;
		 aux2=INT2>>2;
		 aux2=aux2 & 0x3FFF;
		 aux=aux1|aux2;
		 return aux;		 
		}
		
void operaciones:: imprimir(unsigned int B, unsigned int C, unsigned int D){
	
	printf("\nINT1: %x", INT1);
	printf("\nINT2: %x", INT2);
	if(B==1)
	printf("\nB) el bit 4 de INT1 esta activo\n");
	else
	printf("\nB) el bit 4 de INT1 esta inactivo\n");
		
	printf("C) %x\n", C);
	printf("D) %x\n", D);		
}

