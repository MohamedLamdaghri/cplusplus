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
	cout<<" mi codigo es "<<codigoAlumno<<" y mi nota final es "<<notaFinal<<endl;
	 
}

int main(){
	Alumno alu1("jaime", 15,"894jfei22", 5.89);
	alu1.mostrarAlumno();
	
	
		
	system("pause");
	return 0;
}
