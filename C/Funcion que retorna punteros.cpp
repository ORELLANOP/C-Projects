/*Funcion que retorna puntero*/

#include<stdio.h>
int *suma (int a, int b);

int main(void){
	
	int am, bm;
	int *rdo;
	
	scanf("%d%d", &am, &bm);
	rdo= suma (am, bm);
	printf("%d", *rdo);
}

int *suma (int a, int b){
int R;

R= a+b;
return (&R);
}
