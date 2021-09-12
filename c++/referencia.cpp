#include <iostream>

using namespace std;

int main()
{
    long v = 5; 
    long &ref_v = v;//declaración referencia (&), inicialización obligatoria
    long *ptr_v = &v; //declaración puntero (*),inicialización opcional
    // ‘*’ operador “indirección”: obtiene el 
    // valor almacenado en la dirección de 
    // memoria guardada en el puntero
    cout << "VALORES: v=" << v << ", ref_v=" 
    << ref_v << ", ptr_v (indirección)=" 
    << *ptr_v << endl;
    // ‘&’ operador “dirección de”: obtiene la 
    // dirección en que está almacenada una variable
    cout << "MEMORIA: v=" << &v << ", ref_v (no hay diferencia)=" << &ref_v << ", ptr_v=" << &ptr_v << endl;
    // valor (pos. memoria) almacenado en puntero
    cout << "Valor ptr: " << ptr_v << endl;
    v=7; // modificación directa de la vble
    cout << "VALORES1: v=" << v << ", ref_v =" 
    << ref_v << ", ptr_v=" << *ptr_v << endl;
    ref_v=9; // modif. indirecta mediante referencia
    cout << "VALORES2: v=" << v << ", ref_v=" 
    << ref_v << ", *ptr_v=" << *ptr_v << endl;
    *ptr_v = 11; // mod. indirecta mediante puntero
    cout << "VALORES3: v=" << v << ", ref_v=" 
    << ref_v << ", *ptr_v=" << *ptr_v << endl;
    long v2 = -5; ptr_v = &v2; 
    cout << "VALORES4: v2=" << v2 << ", ref_v=" 
    << ref_v << ", *ptr_v=" << *ptr_v << endl;

    return 0;
}

