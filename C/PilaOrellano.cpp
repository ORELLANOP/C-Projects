#include<stdio.h>
#include<stdlib.h>

struct pila {
	int dato;
	struct pila *sig;
};

//void agregar (struct pila*, int);
//void quitar (struct pila*, int);

main(){
	int c=0, s=0, valorelim=0, j=0, Z=0;
	struct pila *p, *base, *temp;
	base=NULL;
	
    printf("Si desea agregar un nodo a la lista presione 1\n Si desea eliminar un nodo de la lista presione 2\n Si desea imprimir la pila presione 3\n Si desea salir del programa presione un 4\n");
    scanf("%d", &s);
    while(s!=4){
    
    switch (s){
    	case 1: 
             	printf("Usted ha seleccionado agregar un nodo\n Ingrese un dato:\n");
		        scanf("%d", &c);
                while(c != 0){
                
		        p=(struct pila*)malloc(sizeof(*p));
		        p->dato=c;
		        p->sig=base;
		        base=p;
		        printf("Ingrese un dato:\n");
		        scanf("%d", &c);
				}
				break;
				
		case 2: 
		
		        printf("Usted ha seleccionado eliminar un nodo\n");
		        if(p!=NULL){
		        	
		        	temp=p;
		        	Z=p->dato;
		        	
					p=p->sig;
					free (temp);
					printf("El valor borrado es: %d \n", Z);
		        	
		       
		        }
		         else
		        printf("La pila esta vacia\n");
		    
			break;
				
		case 3:
		
		        printf("Usted ha seleccionado imprimir la pila:\n");
				if(base=NULL)
				printf("La pila esta vacía\n");
				else{
					base=p;
					while(p!=NULL){
						printf("%3d", p->dato);
						p=p->sig;
						
					}
				p=base;	
					
				}
				break; 		
			
		
						
            }
             printf("\nSi desea agregar un nodo a la lista presione 1\n Si desea eliminar un nodo de la lista presione 2\n Si desea imprimir la pila presione 3\n Si desea salir del programa presione un 4\n");
             scanf("%d", &s);
    }
    return 0;
    
    }
