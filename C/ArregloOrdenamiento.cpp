#include<stdio.h>
#include<conio.h>

main(){
	int i, j, v[10]={0};
	for(i=0; i<10; i++){
		printf("Ingrese el elemento numero %d\n", i+1);
		scanf("%d",v[i] );
	
	}
	
printf("Los elementos del arreglo son:");
for(i=0; i<10; i++){
	printf("El elemento numero %d, es:%d", i+1, v[i]);
}	

return 0;
}
