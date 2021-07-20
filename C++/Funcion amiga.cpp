#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class vector{
			int vec[2];
			public:
				    
					vector(int vecc[2]);
					~vector();
					void multiplicar(int matr[2][2], int vcc[2]);
				
			};
			
class matriz{
				int mat[2][2];
				public:
					    matriz( int matr[2][2]);
					    ~matriz();
					    
						friend void multiplicar(int matr[2][2], int vcc[2]);
};


main(){
  	
	    
	    matriz cuadrada;
		cout<< "A continuacion se multiplicara el vector por la matriz"<< endl;
		multiplicar(mat[2][2], vec[2]);
	  
		
		
	return 0;
	
}	


vector::vector(int vcc[2]){
	cout<<"ingrese los valores del vector" <<endl;
	cin>> vec[0]>>vec[1];
	cout<<"ejecutando el constructor"<< endl;  
	
}


vector::~vector(){
	cout<<"ejecutando el destructor"<<endl;
}

matriz::matriz(int matr[2][2]){
	
	cout<< "ingrese los datos de la matriz"<< endl;
	cin>> mat[0][0] >> mat[0][1]>> mat[1][0] >> mat[1][1];
	cout<<"ejecutando el constructor"<< endl;
	
}

matriz::~matriz(){
	cout<< "ejecutando el destructor";
}


void multiplicar(int matr[2][2], vcc[2]){
	
	int res [2];
	res[0]=vec[0]*mat[0][0]+vec[1]*mat[0][1];
	res[1]=vec[0]*mat[1][0]+vec[1]*mat[1][1];
	
	cout<< "El resultado de la multiplicacion es:"<<endl;
	cout<< res[0]<<endl << res[1]<<endl;
}



