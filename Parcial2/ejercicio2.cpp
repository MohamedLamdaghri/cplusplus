#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class dog
{
    int edad;
    string nombre;

public:
    dog(int _edad, string _nombre): edad {_edad}, nombre{_nombre} {}
    int get_edad() { return edad; }
    string get_nombre() { return nombre; }
    void set_edad(int _edad) { edad = _edad; }
    void set_nombre(string _nombre) { nombre = _nombre; }
    friend ostream& operator<< (ostream& os, dog& p)
    {
        os << "El perro tiene  " << p.edad << " anyos y se llama "<< p.nombre << "\n";
        return os;
    }
};

int main ()
{   
    dog perro(15, "Mamon");
    cout << perro;
    return 0;
}

