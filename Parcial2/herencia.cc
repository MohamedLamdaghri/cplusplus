#include <iostream>
#include <string>

using namespace std;

class C_Persona
{
    string nombre_;
public:
    C_Persona(string m): nombre_{m} {}
    string get_nombre() const { return nombre_; }
    friend ostream& operator<< (ostream &os, const C_Persona &p)
    {
        os << "PERSONA:: " << p.nombre_; 
        return os;
    }
};

class C_Empleado : public C_Persona
{
    string empresa_;
public:
    C_Empleado(string nombre, string empresa): C_Persona{nombre}, empresa_{empresa} {}
    string get_empresa() const { return empresa_; }
};

ostream& operator<< (ostream& os, const C_Empleado &e)
{
    os << "EMPLEADO:: " << e.get_nombre() << " | " << e.get_empresa();
    return os;
}

class C_Estudiante : public C_Persona
{
    string universidad_;
public:
    C_Estudiante(string nombre, string universidad): C_Persona(nombre), universidad_{universidad} {}
    string get_universidad() const { return universidad_; }
    string get_nombre() const { return "#" + C_Persona::get_nombre(); }
};

ostream& operator<< (ostream& os, const C_Estudiante &e)
{
    os << "ESTUDIANTE:: " << e.get_nombre() << " | " << e.get_universidad();
    return os;
}


int main()
{
    C_Persona p {"Ramon la Persona"};
    C_Empleado em {"Juan el Empleado", "AED"};
    C_Estudiante es {"Moha el Estudiante", "UPCT"};
    cout << "PERSONA:: " << p.get_nombre() << endl;
    cout << "EMPLEADO:: " << em.get_nombre() << " | " << em.get_empresa() << endl;
    cout << "ESTUDIANTE:: " << es.get_nombre() << " | " << es.get_universidad() << endl;
    cout << p << endl;
    cout << em << endl;
    cout << es << endl;
    return 0;
}