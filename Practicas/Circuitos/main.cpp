#include <iostream>

#include "Puerta_AND.hpp"
#include "Puerta_NOT.hpp"
#include "Circuito.hpp"

using namespace std;

int main()
{
    circuito::Puerta_AND and1 {"AND1", 100, 50};
    circuito::Puerta_AND and2 {"AND2", 100, 50};
    circuito::Puerta_AND and3 {"AND3", 100, 50};
    circuito::Puerta_AND and4 {"AND4", 100, 50};
    circuito::Puerta_NOT n1 {"NOT1", 20, 30};
    circuito::Puerta_NOT n2 {"NOT2", 20, 30};

    circuito::Circuito circ {2,4};

    
    circ.add_cable_entre (n1.get_in_pin(0), circ.get_pin_inicial(0));
    circ.add_cable_entre (and2.get_in_pin(1), circ.get_pin_inicial(0));
    circ.add_cable_entre (and4.get_in_pin(1), circ.get_pin_inicial(0));

    circ.add_cable_entre (n2.get_in_pin(0), circ.get_pin_inicial(1));
    circ.add_cable_entre (and3.get_in_pin(1), circ.get_pin_inicial(1));
    circ.add_cable_entre (and4.get_in_pin(0), circ.get_pin_inicial(1));
    
    circ.add_cable_entre (and1.get_in_pin(0), n1.get_out_pin());
    circ.add_cable_entre (and3.get_in_pin(0), n1.get_out_pin());
    circ.add_cable_entre (and1.get_in_pin(1), n2.get_out_pin());
    circ.add_cable_entre (and2.get_in_pin(0), n2.get_out_pin());

    circ.add_cable_entre (circ.get_pin_final(0), and1.get_out_pin());
    circ.add_cable_entre (circ.get_pin_final(1), and2.get_out_pin());
    circ.add_cable_entre (circ.get_pin_final(2), and3.get_out_pin());
    circ.add_cable_entre (circ.get_pin_final(3), and4.get_out_pin());

    circ.fijar_entradas ({true, false});
    circ.calcular ();
    circ.mostrar_salidas ();
    return 0;
}
