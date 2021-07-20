#include<stdio.h>
#include<iostream>
#include<stdlib.h>

class enteros{
		int a;
	public:
		enteros(int d):a(d){}
		~enteros(){}
		enteros operator + (enteros b, enteros c );
};




main(){
	
	enteros b(2);
	enteros c(3);
	enteros z;
	z=b+c;

	cout<< "El resultado es igual a: "<< z.a << endl; 
	
	
	
}

enteros::enteros operator + (enteros y, enteros w){
	a=y.a*w.a;
	
	
	
	}
	

