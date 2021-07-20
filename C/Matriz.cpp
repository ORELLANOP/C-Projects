#include<stdio.h>

void imprmir (int [][3]);

main(){
	
	int arreglo1[2][3]= { {2,3,5}, {7,5,4} },
	    arreglo2[2][3]= {1,2,3,4,5},
	    arreglo3[2][3]= {{1,2}, {3} };
	
	printf("Los valores del arreglo 1 son:\n");
	imprimir (arreglo1);
	
	printf("Los valores del segundo arreglo son:\n");
	imprimir (arreglo2);
	
	printf("Los valores del arreglo 3 son:\n");
	imprimir (arreglo3);
	
	return 0;
	
}

void imprimir (int a[][3]){
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++)
		printf("%4d",a[i][j] );
	}

}
