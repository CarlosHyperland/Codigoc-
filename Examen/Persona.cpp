#include <iostream>
using namespace std;

class Persona{
	//atributos 
	protected : string nombres, apellidos, direccion,fecha_nacimiento;
		  int telefono;

	//construtor
		  Persona(){
		  }
		  Persona(string nom, string ape,string dir, string fech, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento = fech;
		}
	//metodo (CRUD)
	void crear ();
	void leer ();
	void actulizar ();
	void borrar();
	
};
