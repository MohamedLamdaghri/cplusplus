//Herencia en POO


#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string, int);
		void mostrarPersona();		
};
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Mi nombre es "<<nombre<<" y mi edad es "<<edad<<endl;
}

class Alumno : public Persona{ //puede acceder a todo lo publico de la calse persona
	private: 
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string, int, string, float); //repsetar la cronologia de creacion de clases
		void mostrarAlumno();
};

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<" Mi codigo es "<<codigoAlumno<<" y mi nota final es "<<notaFinal<<endl;
	 
}

int main(){
	Alumno alu1("Malika", 15,"456u", 9,2);
	alu1.mostrarAlumno();
	//my name is mohamed lamdaghri and im gonna be the best engineer out there
	//i promise
	//i swear in the name of my name that the last thing seh is gonna see 
	//his own son shinning like a fuckong star
	//shoot to the stars aim for the moonnnnn
	
	
		
	system("pause");
	return 0;
}
