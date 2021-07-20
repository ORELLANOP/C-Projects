//Herencia Multiple

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

class ClaseA{
	public:
		ClaseA(int a=10): datoA(a){cout<< "Constructor de A" << endl;}
		int LeerA(){ return datoA;}
	protected:
			int datoA;
};


class ClaseB{
	public:
		ClaseB(int b=20) : datoB(b){cout<< "Constructor de B"<< endl;}
		int LeerB(){ return datoB; }
	protected:
			int datoB;
};


class ClaseC: public ClaseB, public ClaseA{
	public:
		ClaseC(int a=10, int b=20, int c=30): ClaseA(a), ClaseB(b), datoC(c){cout<< "Constructor de C" << endl;}
		int LeerC(){ return datoC;}
	protected:
			int datoC;
};

int main(){
	ClaseC objeto1;
	cout<< "datoA= " << objeto1.LeerA() << ", datoB="<< objeto1.LeerB()<< ", datoC="<< objeto1.LeerC()<< endl;
	ClaseC objeto2 (100, 200, 300);
	cout<< "datoA= " << objeto2.LeerA() << ", datoB= "<< objeto2.LeerB() <<", datoC="<< objeto2.LeerC()<< endl;
	return 0;
}

