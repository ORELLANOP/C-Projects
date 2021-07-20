#include<stdio.h>
#include<stdlib.h>
struct complejo{
	unsigned int N: 2;
	unsigned int stop: 1;
	unsigned int parity: 3;
	unsigned int bre: 1;
	unsigned int DBIT: 1;
};


union configuracion{
	struct complejo actual;
	int LCR;
};

main(){
	union configuracion UNI;
	
	UNI.LCR=0x9E;
	printf("LCR=%x \n", UNI.LCR);
	printf("DBIT= %d \n", UNI.actual.DBIT);
	printf("Break=%d \n", UNI.actual.bre);
	
	switch(UNI.actual.parity){
		
		case 0: printf("Sin paridad \n");
		        break;
		    
		case 3: printf("Paridad par\n");
		        break;
				
		case 1: printf("Paridad impar \n");
				break;
				
		case 5: printf("Siempre 0 \n");
				break;
				
		case 7: printf("Siempre 1 \n");
				break;
				
		default: printf("aaaaaaaa \n");
				break; 								    
	}
	
	if(UNI.actual.stop==0)
		printf("1 bit de stop \n");
	else
		printf("2 bits de stop \n");
		
		switch(UNI.actual.N){
			
			case 0: printf("5 bits de datos \n");
					break;
					
			case 1: printf("6 bits de datos \n");
					break;
					
			case 2: printf("7 bits de datos \n");
					break;
					
			case 3: printf("8 bits de datos \n");
					break;		
							
		}	
		
		return 0;
}
