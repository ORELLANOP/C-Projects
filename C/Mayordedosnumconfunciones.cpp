#include<stdio.h>
#include<conio.h>

int mayor(int x, int y);
main(){
	
	int x, y, may;
	x=0;
	y=0;
	may=0;
	printf("Este programa calcula el mayor de dos numeros distintos usando funciones\n");
	printf("Ingrse el primer numero:\n");
	scanf("%d", &x);
	printf("Ingrese el segundo numero:\n");
	scanf("%d", &y);
	printf("Los numeros ingresados son: %d, %d\n",x, y);
	printf("El mayor de los numeros ingresados es: %d", mayor(x, y));
	return 0;
}

int mayor(int x, int y){
	int may=0;
		if(x<y)
			may=y;
		else
			may=x;
	return(may);
	
}
