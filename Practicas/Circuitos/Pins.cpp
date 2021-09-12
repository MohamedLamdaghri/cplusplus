//
//  Pins.cpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#include "Pins.hpp"
#include "Puerta.hpp" // Aqui necesito la definición completa de Puerta, ahora sí

std::ostream& circuito::operator<< (std::ostream &os, const circuito::Pin &p) {
    os << p.nombre << " (" << &p << ") : ";
    if (p.calculado) {
        os << std::boolalpha << p.valor << " .Retardo : " << p.retardo;
    } else {
        os << "  NO CALCULADO";
    }
    return os;
}
