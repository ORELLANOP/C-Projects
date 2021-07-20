#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
	int **tabla;
	int n =100;
	int m=200;
	int i;
	
	//Arreglo de punteros a int
	tabla=new int*[n];
	//n arreglos de m ints
	for(i=0; i<n; i++)
	tabla[i]=new int[m];
	tabla[21][33]=123;
	cout<< tabla[21][33] << endl;
	// Liberacion de memoria, deshaciendo el camino hecho
	
	for(i=0; i<n; i++)
	delete[] tabla[i];
}
