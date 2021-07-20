//Sobrecarga de funciones

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class sobrefunc{
	int x;
	float y;
	public:
		   sobrefunc(int a, float b);
		   ~sobrefunc();		
		   int abs(int );
		   float abs(float );
		   void print();
};


main(){
	
sobrefunc ejerc1(-4, -3.2);
cout<< "Los numeros ingresados son"; ejerc1.print(); cout<< endl;


}


sobrefunc::sobrefunc(int a, float b){

int Z;
float W;

x=a;
y=b;

Z=abs( a);
cout<< "El valor absoluto del primer numero es:" << Z << endl;
W=abs( b);
cout<< "El valor absoluto del segundo numero es:" << W << endl;


cout<< "Ejecutando el constructor" << endl;
}


sobrefunc::~sobrefunc(){
	cout<<"Ejecutando el destructor" << endl;
}


int sobrefunc::abs( int i){
	if(i < 0)
	return -i;
	else
	return i;
}

float sobrefunc::abs( float x){
	if(x < 0.0)
	return -1.0*x;
	else
	return x;
}


void sobrefunc::print(){
	cout<< x << "," << y << endl;
}




