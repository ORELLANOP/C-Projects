#include<stdio.h>
#define SIZE 10

main(){
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int i, pass, hold;
	
	printf("Datos en el orden original:\n\n");
	for(i=0; i<=SIZE-1; i++)
	printf("%4d", a[i]);
	
	for(pass=1; pass<=SIZE-1; pass++)
	 
	 for(i=0; i<= SIZE-2; i++)
	 
	 if(a[i]>a[i+1]){
	 	
	 	hold=a[i];
	 	a[i]=a[i+1];
	 	a[i+1]=hold;
	 }
	 
	 printf("\n\nDatos ordenados:\n\n");
	 for(i=0; i<=SIZE-1; i++)
	 printf("%4d", a[i]);
	 return 0;
	 
}
