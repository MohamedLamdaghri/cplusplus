//Sobregcarga de constructores (mas un constructor, para distintos tipos de datos de entraada)

#include<iostream>
#include<stdlib.h>
using namespace std;
class Fecha{
	private:
		int dia, mes , anio;
	public:
		Fecha(int, int, int); //constructor 1
		Fecha(long);          //constructor 2
		void mostrarFecha();
};
// Cosntructor 1
Fecha::Fecha(int _dia, int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

//contructor 2 20200710
Fecha::Fecha(long fecha){
	anio = int(fecha/10000);
	mes = int((fecha-anio*10000)/100);
	dia = int(fecha-anio*10000-mes*100);
}


void Fecha::mostrarFecha(){
	cout<<"la fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){
	Fecha hoy(17, 04, 1999);
	Fecha ayer(19990416);
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	system("pause");
	return 0;
}
