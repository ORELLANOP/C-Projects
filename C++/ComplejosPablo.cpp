#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class complejo{
	int re, im;
	public:
		   complejo(int a, int b);
		   ~complejo();
		   void suma(complejo, complejo);
		   void resta(complejo, complejo);
		   void imprimir();
};

main(){
	complejo num1(2,3), num2(4,5), res(0,0);
	cout<< "Primer complejo "; num1.imprimir(); cout<< endl;
	cout<<"Segundo complejo "; num2.imprimir(); cout<< endl;
	res.suma(num1, num2);
	cout<<"El resultado de la suma es:" ; res.imprimir(); cout << endl;
	res.resta(num1, num2);
	cout<<"El resultado de la resta es:"; res.imprimir(); cout << endl;
	
}

complejo::complejo(int a, int b){
	re=a;
	im=b;
	cout<<"Ejecutando el destructor" << endl;
}

complejo::~complejo(){
	cout<<"Ejecutando el destructor"<<endl;
}


void complejo::suma(complejo c, complejo d){
	
	re=c.re+ d.re;
	im=c.im+d.im;
	
}


void complejo::resta(complejo c, complejo d){
	
	re=c.re-d.re;
	im=c.im-d.im;
}

void complejo::imprimir (){
	cout<< re <<"j" <<im <<endl;
}
