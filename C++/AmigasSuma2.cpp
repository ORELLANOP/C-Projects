//Clases amigas
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

class beta;

class alfa{
		int datoA;
	public:
		alfa(int a){datoA=a;}
		int LeerA(){return datoA;}
		friend int suma (alfa aa, beta bb);
};


class beta{
		int datoB;
	public:
		beta(int b){datoB=b;}
		int LeerB(){return datoB;}
		friend int suma (alfa aa, beta bb);
};


int main(){
	
	alfa aa(8);
	beta bb(2);
	
	cout<< "El primer numero es:" << aa.LeerA() << "El segundo numero es:" << bb.LeerB() << endl;
	cout<<"La suma de ambos numero es: " << suma(aa, bb) << endl;
	return 0;
}

int suma (alfa aa, beta bb){
	return(aa.datoA + bb.datoB);
}

