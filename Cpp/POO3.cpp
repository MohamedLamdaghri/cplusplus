//Destructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
	private:
		string nombre, raza;
	public:
		Perro(string, string); // constructor
		~Perro(); //destructor
		void mostrarDatos();
		void jugar();
		
};

//constructo
Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}

//destructor, completo
Perro::~Perro(){
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;	
}

void Perro::jugar(){
	cout<<"Estoy jugando guau guau"<<endl;
}

int main(){
	
	Perro p("Puppy", "Mastin");
	p.mostrarDatos();
	p.jugar();
	cout<<"\n";
	p.~Perro();
	
	system("pause");
	return 0;	
}
