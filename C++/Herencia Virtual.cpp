//Herencia Virtual

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;


class Persona{
	public:
		Persona(char *n){strcpy(nombre, n);}
		const char *LeerNombre(){return nombre;}
		
	protected:
		char nombre[30];
};

class Empleado: virtual public Persona{
	public:
		Empleado(char *n, int s):Persona(n), salario(s){salario=s;}
		int LeerSalario() const {return salario;}
		//void ModificarSalario (int s){salario=s;}
	protected:
		int salario;
};


class Estudiante: virtual public Persona{
	
	public: 
		Estudiante(char *n, float no):Persona(n), nota(no){nota=no;}
		float LeerNota()const {return nota;}
		//void ModificarNota(float no){nota=no;}
	protected: 
		float nota;
};

class Becario: public Empleado, public Estudiante{
	
	public:
		Becario(char *n, int s, float no): Empleado(n,s), Estudiante(n,no), Persona(n) {}
};

main(){
	
	Becario Administrador1("Pablo Orellano", 3000, 7.5);
	cout<< "Becarios de administracion" << endl;
	cout<< Administrador1.LeerNombre() << "," << Administrador1.LeerSalario() <<"," << Administrador1.LeerNota() << endl;
	return 0;
	
}



