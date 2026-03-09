#include "Persona.cpp"
#include <iostream>
using namespace std;
class Propietario: public Persona{
	//atributos
	private : string nit;
		  double cui;
	//Constructor
	public:

	Propietario(){
	}
	Propietario(string nom,string ape, string dir, string fech,int tel,string nt,double cu): Persona(nom,ape,dir,fech,tel){
		  nit = nt;
		  cui = cu;
	}
	//metodos
	//set (modificar)
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
	void setTelefono(int tel){telefono = tel;}
	void setNit(string nt){nit = nt;}
	void setCui(int cu){cui = cu;}
	
	//get (mostrar)
	string fetNombres(){return nombres;}
	string fetApellidos(){return apellidos;}
	string fetDireccion(){return direccion;}
	string fetFecha_nacimiento(){return fecha_nacimiento;}
	int fetTelefono(){return telefono;}
	string fetNit(){return nit;}
	double fetCui(){return cui;}
	
	//metodos
	void mostrar(){
	cout<<"______"<<endl;
	cout<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<nit<<","<<cui<<endl;
	}

	cout<<"examen realizado"

};
