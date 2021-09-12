//Polimorfismo


#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string, int);
		virtual void mostrar();	//virtual para el polimorfismo, solo en la clase pdre	
};

class Alumno : public Persona{ 
	private: 
		float notaFinal;
	public:
		Alumno(string, int, float);
		void mostrar();
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre,_edad){
	notaFinal = _notaFinal;
}

void Alumno::mostrar(){
	Persona::mostrar(); //le estamos diciendo que eradomos mostrar de persona y le añadimos un peu
	cout<<"Nota Final: "<<notaFinal<<endl;
	
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre,_edad){
	materia = _materia;	
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}
int main(){
	Persona *vector[3];
	vector[0] = new Alumno("Alejandro", 14, 4.40);	
	vector[0]->mostrar();
	vector[1] = new Alumno("Maria", 19, 8.40);	
	vector[1]->mostrar();
	vector[2] = new Profesor("Cain", 97, "Filosofia Griega");	
	vector[2]->mostrar();
	system("pause");
	return 0;
}
