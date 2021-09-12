#include <iostream>

using namespace std;

class Box
{
    long altura;
    long anchura;
    long profundidad;
    bool llena;
    long nivel;
    long volumen;
public:
    Box(long x, long y, long z, bool _llena = false, long _nivel = 0) : altura{x}, anchura{y}, profundidad{z}, llena{_llena}, nivel{_nivel} 
    {
        volumen = altura * anchura * profundidad;
    }
    long get_altura() const { return altura; }
    long get_anchura() const { return anchura; }
    long get_profundidad() const { return profundidad; }
    bool get_llena() const { return llena; }
    long get_nivel() const { return nivel; }
    bool insertar_objeto(long vol_objeto);
    void vaciar_caja(long vol_vaciar);
    friend ostream& operator<< (ostream& os, Box& p)
    {
        os << "La caja tiene un volumen de   " << p.volumen << " del cual "<< p.nivel  << "esta ocupado "<< endl;
        return os;
    }
};


bool Box::insertar_objeto(long vol_objeto)
{
    nivel += vol_objeto;
    if(nivel > volumen || llena == true) return false;
    else if (nivel < volumen && llena == false) return true;
    else if (nivel == volumen && llena == false)
    {
        llena = true;
        return true;
    } 

    return false;
}

void Box::vaciar_caja(long vol_vaciar)
{
    if(vol_vaciar > nivel)
    {
        cout << "No hay suficientes elementos en la caja." << endl;
        return;
    }
    
    nivel -=vol_vaciar;
}

int main ()
{
    Box caja {2, 2, 2};

    cout << boolalpha << caja.insertar_objeto(7) << endl;
    cout << caja << endl;
    cout << caja.insertar_objeto(1) << endl;
    cout << caja.get_llena() << endl;
    cout << caja.get_nivel() << endl;
    caja.vaciar_caja(7);
    cout << caja.get_nivel() << endl;
    return 0;
}