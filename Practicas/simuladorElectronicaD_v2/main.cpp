#include <iostream>

#include "Puerta_AND.hpp"
#include "Circuito.hpp"
#include "Puerta_NOT.hpp"

using namespace std;

int main()
{
    circuito::Puerta_AND p1 {"P1"};
    circuito::Puerta_AND p2 {"P2"};
    circuito::Puerta_NOT n1 {"N1"};
    circuito::Circuito circ {3,1};
    circ.add_cable_entre (p1.get_in_pin(0), circ.get_pin_inicial(0));
    circ.add_cable_entre (p1.get_in_pin(1), circ.get_pin_inicial(1));
    circ.add_cable_entre (p2.get_in_pin(0), p1.get_out_pin());
    circ.add_cable_entre (p2.get_in_pin(1), circ.get_pin_inicial(2));
    circ.add_cable_entre (n1.get_in_pin(0), p2.get_out_pin());
    circ.add_cable_entre (circ.get_pin_final(0), n1.get_out_pin());
    circ.fijar_entradas ({true, false, true});
    circ.calcular ();
    circ.mostrar_salidas ();
    return 0;
}
