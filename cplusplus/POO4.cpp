//Metodos constructores y modificadores (getters y setters)

#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{
	private: //atributos
		int x,y;
	public: //metodos
		Punto();
		void setPunto(int, int);//setter
		int getPuntoX();
		int getPuntoY();	
};

Punto::Punto(){
}

//Establecemos valores para los atributos
void Punto::setPunto(int _x, int _y){
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int main(){
	Punto punto1;
	
	punto1.setPunto(14,34);
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	system("pause");
	return 0;
}
