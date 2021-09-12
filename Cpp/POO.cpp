//clases en C++
#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //encapsulado de atributos
		int edad;
		string nombre;
	public: // metodos. son de tipo publico para que todo el mundo pueda verlos
	Persona(int, string); //constructor de la clase
	void leer();
	void correr();			
};
//constructor, sirve para inicializar los atributos  de la clase
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Tengo "<<edad<<" agnos y estoy corriendo una maraton"<<endl;
}
int main(){
	Persona p1 = Persona(21, "Mohamed");
	Persona p2(19, "Maria"); //manera alternativa de inicializar un objeto
	p1.leer();
	p2.leer();
	
	system("pause");
	return 0;
}
