
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class decimal;

class entero{
	int a;
	public:
		entero(int x);
		~entero();
		void imprimirentero();
		 friend float sumar(entero Z, decimal W);
};


class decimal{
	float b;
	public:
		decimal(float y);
		~decimal();
		void imprimirdecimal();
		 friend float sumar(entero Z, decimal W);
};

main(){
	
	float T;
	entero primero(10);
	decimal segundo(5.6);
	//decimal res(0.0);
	cout<<"El numero entero es:"; primero.imprimirentero(); cout<< endl;
	cout<<"El numero decimal es:"; segundo.imprimirdecimal(); cout<< endl;
	//res.sumar(primero, segundo);
	T=sumar(primero, segundo);
	cout<<"La suma de ambos numeros resulta:"<<T<< endl;	
		
}

entero::entero(int x){
	a=x;
	cout<<"Ejecutando constructor entero"<< endl;
}

entero::~entero(){
	cout<<"Ejecutando destructor entero"<< endl;
}

decimal::decimal(float y){
	b=y;
	cout<<"Ejecutando constructor decimal"<< endl;
}

decimal::~decimal(){
	cout<<"Ejecutando destructor decimal"<< endl;
}

float sumar(entero Z, decimal W){
	
	float c;
		c=Z.a+W.b;
		return c;
	}


void entero::imprimirentero(){
	cout<< a << endl;
	}



void decimal::imprimirdecimal(){
	cout<< b << endl;	
}
