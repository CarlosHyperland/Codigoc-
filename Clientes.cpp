#include "Personas.cpp"
#include <iostream>

using namespace std;

class Clientes : Personas{

  //Atributos
  private:
    string nit;

  //Constructores
  public:
    Cliente(){
    }
    Clientes(string now,string ape,string dir,int tel,string,fn, string n): Personas(nom,ape,dir, tel,fn){
    nit = n;
    }

  //Metodos
  void leer(){
  cout<<"nit:"<<nit<<endl;
  cout<<"Nombres:"<<nombres<<endl
  cout<<"Apellidos:"<<apellidos<<endl
  cout<<"Direccion:"<<direccion<<endl
  cout<<"Telefono:"<<telefono<<endl
  cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<end
  }
};
