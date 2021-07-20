#include<stdio.h>
#include <stdlib.h>

struct coordenadas{
	unsigned int NS : 1;
	unsigned int NSlat : 7;
	unsigned int NSmin: 6;
	unsigned int NSfrac:5;
	unsigned int EO : 1;
	unsigned int EOlat : 8;
	unsigned int EOmin: 6;
	unsigned int EOfrac:5;
};

union ubicacion{
	struct coordenadas actual;
	char info[50];
	unsigned long barco;
};

void imprimir (char *);


main(){
	
	char info[50] = "La ubicacion del barco es:";

imprimir (info);


	return 0;

	
	
}

void imprimir (char *b)
{
	//long barco;
	union ubicacion UNI;
	UNI.barco={0x5E3C223689};
//	ubicacion.NSlat={0000100 };
	int i;
	for(i=0;i<50;i++)
	     {
	     	printf("%c",b[i]);
	     }
	
	if(UNI.actual.NS==1)
	printf("\nNORTE");
	else
	printf("\nSUR");
	printf("\t%d Grados",UNI.actual.NSlat);
	printf("\t%d Minutos",UNI.actual.NSmin);
	printf("\t%d Segundos",UNI.actual.NSfrac);
	if(UNI.actual.EO==1)
	printf("\nESTE");
	else
	printf("\nOESTE");
	printf("\t%d Grados",UNI.actual.EOlat);
	printf("\t%d Minutos",UNI.actual.EOmin);
	printf("\t%d Segundos",UNI.actual.EOfrac);
	
	
}
