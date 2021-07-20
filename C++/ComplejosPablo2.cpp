#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class complejo{
	int re, im;
	public:
		complejo(int a, int b);
		~complejo();
		void suma(complejo a, complejo b);
		void resta(complejo a, complejo b);
		void imprimir();
};

main(){
	complejo num1(3, 4), num2(5, 6), res(0, 0);
	cout<< "Primer complejo"; num1.imprimir(); cout<<endl;
	cout<< "Segundo complejo"; num2.imprimir(); cout<<endl;
	res.suma(num1, num2);
	cout<< "La suma de ambos da"; res.imprimir(); cout<< endl;
	res.resta(num1, num2);
	cout<< "La resta de ambos es:"; res.imprimir(); cout<< endl;
}


complejo::complejo(int a, int b){
	re=a;
	im=b;
	cout<<"Ejecutando el constructor"<< endl;
}

complejo::~complejo(){
	cout<<"Ejecutando destructor" <<endl;
}

void complejo::suma(complejo c, complejo d){
	re=c.re+d.re;
	im=c.im+d.im;
}

void complejo::resta(complejo c, complejo d){
	re=c.re-d.re;
	im=c.im- d.im;
}

void complejo::imprimir(){
	cout<< re <<"j" << im;
}
